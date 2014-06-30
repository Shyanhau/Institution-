#ifndef Stack_H
#define Stack_H
#include "Institution.h"
#include <stdio.h>

typedef struct
{
	void *topOfStack;

} Stack;

Stack *Stack_create();
void Stack_push(Stack *stack, void *element);
void *Stack_pop(Stack *stack);


#endif // Stack_H
