#include "unity.h"
#include "Institution.h"
#include "mock_LinkedList.h"
#include "mock_Stack.h"

void setUp(void){}

void tearDown(void){}

void test_Institution_reverse_in_one_institution_only(void)
{
	LinkedList inputList, outputList;
	Stack stackInstance;
	Institution institution_instance;
	institution_instance.name= "TARUC";
	institution_instance.address= "Kuala Lumpur";
	institution_instance.postcode= 53300;
	institution_instance.telephone= 132587456;
	institution_instance.type= UniversityCollege;
	institution_instance.yearEstablished= 1972;
	inputList.head = &institution_instance;
	inputList.tail = &institution_instance;
		
	
	//mock
	Stack_create_ExpectAndReturn(&stackInstance);
	List_removeHead_ExpectAndReturn(&inputList, &institution_instance);
	Stack_push_Expect(&inputList, &institution_instance);
	List_removeHead_ExpectAndReturn(&inputList, NULL);
	Institution_reverse(&inputList , &outputList);
}

// void test_Institution_reverse_in_one_institution_only(void)
// {
	// LinkedList inputList, outputList;
	// Stack stackInstance;
	// Institution institution_instance;
	// institution_instance.name= "TARUC";
	// institution_instance.address= "Kuala Lumpur";
	// institution_instance.postcode= 53300;
	// institution_instance.telephone= 132587456;
	// institution_instance.type= UniversityCollege;
	// institution_instance.yearEstablished= 1972;
	// inputList.head = &institution_instance;
	// inputList.tail = &institution_instance;
		
	// Institution institution_instance02;
	// institution_instance02.name= "USM";
	// institution_instance02.address= "Penang";
	// institution_instance02.postcode= 53420;
	// institution_instance02.telephone= 141325681;
	// institution_instance02.type= University;
	// institution_instance02.yearEstablished= 1950;
	
	
	// // mock
	// Stack_create_ExpectAndReturn(&stackInstance);
	// List_removeHead_ExpectAndReturn(&inputList, &institution_instance);
	// Stack_push_Expect(&inputList, &institution_instance);
	// List_removeHead_ExpectAndReturn(&inputList, NULL);
	// Institution_reverse(&inputList , &outputList);
	
// }

// void test_Institution_reverse_in_one_institution_only(void)
// {
	// LinkedList inputList, outputList;
	// Stack stackInstance;
	// Institution institution_instance;
	// institution_instance.name= "TARUC";
	// institution_instance.address= "Kuala Lumpur";
	// institution_instance.postcode= 53300;
	// institution_instance.telephone= 132587456;
	// institution_instance.type= UniversityCollege;
	// institution_instance.yearEstablished= 1972;
	// inputList.head = &institution_instance;
	// inputList.tail = &institution_instance;
		
	// Institution institution_instance02;
	// institution_instance02.name= "USM";
	// institution_instance02.address= "Penang";
	// institution_instance02.postcode= 53420;
	// institution_instance02.telephone= 141325681;
	// institution_instance02.type= University;
	// institution_instance02.yearEstablished= 1950;
	
	// Institution institution_instance03;
	// institution_instance03.name= "SEGI";
	// institution_instance03.address= "Sabah";
	// institution_instance03.postcode= 91000;
	// institution_instance03.telephone= 188773608;
	// institution_instance03.type= College;
	// institution_instance03.yearEstablished= 2000;
	
	// // mock
	// Stack_create_ExpectAndReturn(&stackInstance);
	// List_removeHead_ExpectAndReturn(&inputList, &institution_instance);
	// Stack_push_Expect(&inputList, &institution_instance);
	// List_removeHead_ExpectAndReturn(&inputList, NULL);
	// Institution_reverse(&inputList , &outputList);
// }