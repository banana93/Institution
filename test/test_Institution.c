#include "unity.h"
#include "Institution.h"
#include "mock_LinkedList.h"
#include "mock_Stack.h"

void setUp(void){}

void tearDown(void){}

void test_Institution_reverse_exploration(void)
{
	int result;
	LinkedList inputList, outputList;
	Stack stack;
	Institution UTAR = 	{.name = "UTAR"};
	Institution USM = {.name = "USM"};
						 
	Stack_create_ExpectAndReturn(&stack);

	List_removeHead_ExpectAndReturn(&inputList, &UTAR);
	Stack_push_Expect(&stack, &UTAR);
	List_removeHead_ExpectAndReturn(&inputList, &USM);
	Stack_push_Expect(&stack, &USM);
	
	
	List_removeHead_ExpectAndReturn(&inputList, NULL);
	
	Stack_pop_ExpectAndReturn(&stack, &USM);
	List_addTail_Expect(&outputList, &USM);
	Stack_pop_ExpectAndReturn(&stack, &UTAR);
	List_addTail_Expect(&outputList, &UTAR);
	
	Stack_pop_ExpectAndReturn(&stack, NULL);
	
	Institution_reverse(&inputList, &outputList);
}

void xtest_Institution_reverse_given_UTAR_should_be_able_to_push_UTAR_in(void)
{
	LinkedList inputList, outputList;
	Stack stack;
	Institution UTAR = 	{.name = "UTAR"};

	Stack_create_ExpectAndReturn(&stack);

	List_removeHead_ExpectAndReturn(&inputList, &UTAR);
	Stack_push_Expect(&stack, &UTAR);
	
	List_removeHead_ExpectAndReturn(&inputList, NULL);
	
	Institution_reverse(&inputList, &outputList);
}

void test_Institution_reverse_after_UTAR_is_pushed_should_be_able_to_pop_UTAR_out(void)
{
	LinkedList inputList, outputList;
	Stack stack;
	Institution UTAR = 	{.name = "UTAR"};

	Stack_create_ExpectAndReturn(&stack);

	List_removeHead_ExpectAndReturn(&inputList, &UTAR);
	Stack_push_Expect(&stack, &UTAR);
	
	List_removeHead_ExpectAndReturn(&inputList, NULL);
	
	Stack_pop_ExpectAndReturn(&stack, &UTAR);
	List_addTail_Expect(&outputList, &UTAR);
	
	Stack_pop_ExpectAndReturn(&stack, NULL);
	
	Institution_reverse(&inputList, &outputList);
}