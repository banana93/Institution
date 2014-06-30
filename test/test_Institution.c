#include "unity.h"
#include "Institution.h"
#include "mock_LinkedList.h"
#include "mock_Stack.h"

void setUp(void){}

void tearDown(void){}

void test_LinkedList_exploration(void)
{
	int result;
	Institution UTAR = 	{.name = "UTAR",
						 .address = "Setapak",
						 .yearEstablished = 2003};
						 
	// Institution USM = {.name = "USM",
					   // .address = "Serdang",
					   // .postcode = 24567,
					   // .telephone = 9876543,
					   // .type = 1,
					   // .yearEstablished = 1989};
	
	// Institution MMU = {.name = "MMU",
					   // .address = "Cheras",
					   // .postcode = 51200,
					   // .telephone = 4567891,
					   // .type = 1,
					   // .yearEstablished = 1978};
	LinkedList list;
	
	List_addTail_Expect(&list, &UTAR);
	TEST_ASSERT_EQUAL_STRING("UTAR", UTAR.name);
	// List_addTail_Expect(&list, &USM);
	// List_addTail_Expect(&list, &MMU);
	
	
	


	
}
