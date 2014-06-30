#ifndef Institution_H
#define Institution_H
#include "Stack.h"
#include "LinkedList.h"
#include <stdio.h>


typedef enum{Unknown, UniversityCollege, College} InstitutionType;

typedef struct Institution_t
{
	char *name;
	char *address;
	unsigned long postcode;
	unsigned long int telephone;
		InstitutionType type;
		int yearEstablished; 
}Institution ;




#endif // Institution_H
