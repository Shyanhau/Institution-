#include "unity.h"
#include "mock_Stack.h"
#include "mock_LinkedList.h"
#include "Institution.h"


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







 Stack_create_CMockExpectAndReturn(26, &stackInstance);

 List_removeHead_CMockExpectAndReturn(27, &inputList, &institution_instance);

 Stack_push_CMockExpect(28, &inputList, &institution_instance);

 List_removeHead_CMockExpectAndReturn(29, &inputList, ((void *)0));

 Institution_reverse(&inputList , &outputList);

}
