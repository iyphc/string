#include <assert.h>
#include <stdio.h>
typedef enum {
	OK,
	failure
} Errors;

void run_all_tests();
Errors test_myStrlen();
Errors test_myStrcpy();
Errors test_myStrcmp();
Errors test_myStrchr();
Errors test_myStrdup();
Errors test_myStrstr();
Errors test_myMemchr();
Errors test_myMemset();
Errors test_myMemcpy();
Errors test_myMemcmp();

