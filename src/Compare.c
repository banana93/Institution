#include <stdio.h>
#include "Compare.h"
#include "Institution.h"

int isUniversityCollege(void *elem1, void *type)
{
	if(((Institution *)elem1)->type == *(InstitutionType *)type)
		return 1;
	else
		return 0;
}