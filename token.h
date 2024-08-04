#ifndef sol_token_h
#define sol_token_h

//Function definitions
#define ILLEGAL "ILLEGAL"
#define EOF_TOK "EOF"

// Identifiers + literals
#define IDENT "IDENT"  // add, foobar, x, y, ...
#define INT "INT"      // 1343456

// Operators
#define ASSIGN "="
#define PLUS "+"

// Delimiters
#define COMMA ","
#define SEMICOLON ";"
#define LPAREN "("
#define RPAREN ")"
#define LBRACE "{"
#define RBRACE "}"

#define FUNCTION "FUNCTION"
#define LET "LET"


typedef char* TokenType;


typedef struct {
  TokenType Type; 
  char* Literal;
} Token;

const struct {
} TokenTypes;

#endif
