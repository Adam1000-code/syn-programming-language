#ifndef AS_FRONTEND_H
#define AS_FRONTEND_H

#include "AST.h"

char* as_f(AST_T* ast, list_T* list);

char* as_f_root(AST_T* ast, list_T* list);
#endif