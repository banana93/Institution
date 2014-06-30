#include "unity.h"
#include "Compare.h"
#include "mock_Institution.h"

void setUp(void){}

void tearDown(void){}

void test_isUniversityCollege_if_elem1_and_type_is_the_same_should_return_1(void)
{
	Institution TARUC = {.type = UniversityCollege};
	int elem1 = 1;
	InstitutionType type = UniversityCollege;
	int result;
	
	result = isUniversityCollege(&TARUC, &type);
	TEST_ASSERT_EQUAL(1, result);
	
}
