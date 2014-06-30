#include <stdio.h>
#include <string.h>
#include "Institution.h"
#include "LinkedList.h"
#include "Stack.h"

int Institution_reverse(LinkedList *inputList, LinkedList *outputList)
{
	Institution *institute;
	Stack *stack = Stack_create();

	do
	{
		institute = List_removeHead(inputList);
		if(institute != NULL)
		{
			printf("Name1 : %s \n", institute->name);
			Stack_push(stack, institute);
		}
		else 
			printf("Address : %p \n", institute);
			
	}while(institute != NULL);

	do
	{
		institute = Stack_pop(stack);
		if(institute != NULL)
		{
			printf("Name : %s \n", institute->name);
			List_addTail(outputList, institute);
		}
		else
			printf("Address : %p \n", institute);
			
	}while(institute != NULL);
}

int Institution_select(LinkedList *inputList, LinkedList *outputList, void *criterion, int (*compare)(void *, void *))
{
	Institution *institute;
	int result;
	
	institute = List_removeHead(inputList);
	printf("Name: %s \n", institute->name);
	printf("Type: %d \n", institute->type);
	
	result = compare();
	printf("result : %d \n", result);
	if(result == 1)
		List_addTail(outputList, institute);
	
}