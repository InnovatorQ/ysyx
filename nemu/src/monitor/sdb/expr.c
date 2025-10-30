/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/paddr.h>
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <stdlib.h>
#include <time.h>

enum {
  TK_NOTYPE = 256, TK_EQ, TK_NE, TK_AND, TK_NUM, TK_HEX, TK_REG, DEREF, 

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"-", '-'},           // minus
  {"\\*", '*'},         // multiply
  {"/", '/'},           // divide
  {"\\(", '('},         // left parenthesis
  {"\\)", ')'},         // right parenthesis
  {"&&", TK_AND},      // logical AND
  {"==", TK_EQ},        // equal
  {"!=", TK_NE},        // not equal
  {"0[xX][0-9a-fA-F]+", TK_HEX}, // hexadecimal number
  {"[0-9]+", TK_NUM},   // decimal number
  {"\\$[a-zA-Z0-9]+", TK_REG}, // register
  
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[2048] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

bool check_parentheses(int p, int q) {
  if(tokens[p].type == '(' || tokens[q].type == ')') {
    int paren_count = 0;
    //计算括号的匹配情况
    for(int i = p + 1; i < q; i++) {
      if (tokens[i].type == '(') {
        paren_count++;
      } else if (tokens[i].type == ')') {
        paren_count--;
      }
    }
    if( paren_count == 0) {
      return true;
    }else {
      return false;
    }
  }else {
    return false;
  }
}

static void print_tokens() {
  printf("Debug: Total %d tokens recognized:\n", nr_token);
  for (int i = 0; i < nr_token; i++) {
    printf("  [%d] type=%d", i, tokens[i].type);
    if (tokens[i].type == TK_NUM || tokens[i].type == TK_HEX || tokens[i].type == TK_REG) {
      printf(", str='%s'", tokens[i].str);
    }else if(tokens[i].type == DEREF) {
      printf(", str='DEREF'");
    }else if(tokens[i].type == TK_AND) {
      printf(", str='%s'", tokens[i].str);
    }else if(tokens[i].type == TK_EQ) {
      printf(", str='%s'", tokens[i].str);
    }else if(tokens[i].type == TK_NE) {
      printf(", str='%s'", tokens[i].str);
    }else {
      printf(", str='%c'", tokens[i].type);
    }

    printf("\n");
  }
}

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
          case TK_NOTYPE: 
            break;
          case TK_NUM:
            tokens[nr_token].type = rules[i].token_type;
            strncpy(tokens[nr_token].str, substr_start, substr_len);
            tokens[nr_token].str[substr_len] = '\0';
            nr_token++;
            break;
          case TK_HEX:
            tokens[nr_token].type = rules[i].token_type;
            strncpy(tokens[nr_token].str, substr_start, substr_len);
            tokens[nr_token].str[substr_len] = '\0';
            nr_token++;
            break;
          case TK_REG:
            tokens[nr_token].type = rules[i].token_type;
            strncpy(tokens[nr_token].str, substr_start, substr_len);
            tokens[nr_token].str[substr_len] = '\0';
            nr_token++;
            break;
          default:
            tokens[nr_token].type = rules[i].token_type;
            strncpy(tokens[nr_token].str, substr_start, substr_len);
            tokens[nr_token].str[substr_len] = '\0';
            nr_token++;
            break;
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  
  return true;
}


static word_t eval(int p, int q) {
  if (p > q) {
    return 0;
  }
  else if (p == q) {
    if (tokens[p].type == TK_NUM) {
      //直接返回数字
      return atoi(tokens[p].str);
    }
    else if (tokens[p].type == TK_HEX) {
      //返回十六进制
      return strtoul(tokens[p].str, NULL, 16);
    }
    else if (tokens[p].type == TK_REG) {
      //返回寄存器中的值
      bool success;
      word_t val = 
      isa_reg_str2val(tokens[p].str + 1, &success);
      return success ? val : 0;
    }
    return 0;
  }
  else if (check_parentheses(p, q) == true) {
    return eval(p + 1, q - 1);
  }
  else {
    int op = -1;
    int paren_count = 0;
    for (int i = p; i <= q; i++) {
      if (tokens[i].type == '(') {
        paren_count++;
      } else if (tokens[i].type == ')') {
        paren_count--;
      } else if (paren_count == 0 && (tokens[i].type == '+' || tokens[i].type == '-' || 
          tokens[i].type == '*' || tokens[i].type == '/' || 
          tokens[i].type == TK_EQ || tokens[i].type == TK_NE ||
          tokens[i].type == TK_AND || tokens[i].type == DEREF)) {
        op = i;
      }
    }
    
    word_t val1 = eval(p, op - 1);
    word_t val2 = eval(op + 1, q);
    //返回运算结果
    switch (tokens[op].type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': return (val2 != 0) ? (val1 / val2) : 0;
      case TK_EQ: return val1 == val2;
      case TK_NE: return val1 != val2;
      case TK_AND: return val1 && val2;
      case DEREF: return paddr_read(val2, 4) ;
      default: return 0;
    }
  }
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  
  for (int i = 0; i < nr_token; i ++) {
    if (tokens[i].type == '*' && 
      (i == 0 || 
        tokens[i - 1].type == '(' ||
        tokens[i - 1].type == '+' || 
        tokens[i - 1].type == '-' ||
        tokens[i - 1].type == '*' || 
        tokens[i - 1].type == '/' ||
        tokens[i - 1].type == TK_EQ || 
        tokens[i - 1].type == TK_AND || 
        tokens[i - 1].type == TK_NE) ) {
      tokens[i].type = DEREF;
    }
  }
  print_tokens();
  *success = true;
  return eval(0, nr_token - 1);
}
