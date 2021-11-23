
#ifndef _TOKENIZE_H_
#define _TOKENIZE_H_

#include "def.h"

Token *tokenize(char *p);
Token *new_token(TokenKind kind, Token *cur, char *str);

#endif /* _TOKENIZE_H_ */