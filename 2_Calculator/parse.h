#ifndef _PARSE_H_
#define _PARSE_H_

#include "def.h"

bool consume(char op);
void expect(char op);
int expect_number();
bool at_eof();
Node *new_node(NodeKind kind, Node *lhs, Node *rhs);
Node *new_node_num(int val);
Node *primary();
Node *mul();
Node *expr();

#endif /* _PARSE_H_ */