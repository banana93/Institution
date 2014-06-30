#include <stdio.h>
#include <string.h>
#include "Institution.h"
#include "LinkedList.h"
#include "Stack.h"

int Institution_reverse(LinkedList *inputList, LinkedList *outputList)
{
	Institution *institute;
	LinkedList *list;
	Stack *stack = Stack_create();
	
	
	
	// institute = List_removeHead(inputList);
	// printf("Name1 : %s \n", institute->name);
	// Stack_push(stack, institute);
	
	// institute = List_removeHead(inputList);
	// printf("Name2 : %s \n", institute->name);
	// Stack_push(stack, institute);
	
	// institute = List_removeHead(inputList);
	// printf("Address : %p \n", institute);
	
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
	
	
	// institute = Stack_pop(stack);
	// printf("Name : %s \n", institute->name);
	// List_addTail(outputList, institute);
	
	// institute = Stack_pop(stack);
	// printf("Name : %s \n", institute->name);
	// List_addTail(outputList, institute);
	
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