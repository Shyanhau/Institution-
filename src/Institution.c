#include "Institution.h"
#include "LinkedList.h"
#include "Stack.h"
#include <stdio.h>

int Institution_reverse(LinkedList *inputList , LinkedList *outputList )
{
	Institution *data_remove, *data_outputList ; 
	Stack *stack = Stack_create();
	
	do
	{
		data_remove = (Institution *)List_removeHead(inputList);
		Stack_push(stack, data_remove);
		
	}while((Institution *)List_removeHead(inputList) != NULL);
	
		// List_addTail(outputList, data_outputList);
		// data_outputList = (Institution *)Stack_pop(stack);
		
	return 0;
}