#include "string.h"
#include "string_test.h"
const char* test_string = NULL;

Errors test_myStrcmp() {
	char test_string1[] = "abacaba";
	char test_string2[] = "abacaba";
	if (myStrcmp(test_string, test_string1) != NULL) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	if (myStrcmp(test_string1, test_string) != NULL) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	if (myStrcmp(test_string1, test_string2) != 0) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	test_string2[myStrlen(test_string2) - 3] = 'q';
	if (myStrcmp(test_string1, test_string2) == 0) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	return OK;
}

Errors test_myStrlen() {
	if (myStrlen(test_string) != NULL) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	char test_string1 [] = "abacaba";
	if (myStrlen(test_string1) != 7) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	return OK;
}

Errors test_myStrcpy() {
	char test_string1 [] = "abacaba";
	if (myStrcpy(test_string1, test_string) != NULL) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	if (myStrcpy(test_string, test_string1) != NULL) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	char test_string2[myStrlen(test_string1) + 1];
	myStrcpy(test_string2, test_string1);
	if (myStrcmp(test_string1, test_string2) != 0) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	return OK;
}

Errors test_myStrchr() {
	if (myStrchr(test_string, (int)'b') != NULL) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	if (myStrchr("abacaba", (int)'d') != NULL) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	if (myStrchr("abacaba", (int)'b') == NULL) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	return OK;
}

Errors test_myStrdub() {
	if (myStrdub(test_string) != NULL) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	char test_string1 [] = "abacaba";
	char* test_string2 = myStrdub(test_string1);
	if (myStrcmp(test_string1, test_string2) != 0) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	return OK;
}

Errors  test_myStrstr() {
    char test_string1[] = "abacabacaba";
    char target_string2[] = "";
    char result_string2[] = "abacabacaba";
       char target_string3[] = "caba";
    char result_string3[] = "cabacaba";
	if (myStrcmp(test_string, test_string1) != NULL) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	if (myStrcmp(test_string1, test_string) != NULL) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
    char* a = myStrstr(test_string1, target_string2);
    if (myStrcmp(result_string2, a) != OK) {
        printf("I don't wanna do it more. Crashed.");
		return failure;
    }
    if (myStrcmp(result_string3, myStrstr(test_string1, target_string3)) != 0) {
        printf("I don't wanna do it more. Crashed.");
		return failure;
    }
    char target_string4[] = "ui";
    if (myStrstr(test_string1, target_string4) != NULL) {
        printf("I don't wanna do it more. Crashed.");
		return failure;
    }
    return OK;
}

Errors test_myMemchr() {
	char test_string1 [] = "abacaba";
	if (myMemchr(test_string, (int)'c', 7) != NULL) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	if (myMemchr(test_string1, (int)'c', 7) != 4) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	if (myMemchr(test_string1, (int)'d', 7) != NULL) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	return OK;
}

Errors test_myMemset() {
	char test_string1[] = "abacabaxop";
	char result_string1[] = "cccccbaxop";
	if (myMemset(test_string, 'c', 5) != NULL) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	if (myStrcmp(result_string1, myMemset(test_string1, 'c', 5)) != 0) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	return OK;
}

Errors test_myMemcpy() {
	char test_string1 [] = "abacaba";
	char test_string2[4];
	char* test_string3;
	if (myMemcpy(test_string, test_string1, 8) != NULL) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	if (myMemcpy(test_string1, test_string, 8) != NULL) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	if (myMemcpy(test_string1, test_string2, 100) != NULL) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	if (myMemcpy(test_string2, test_string1, 8) != NULL) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	if (myStrcmp(myMemcpy(test_string3, test_string1, myStrlen(test_string1) + 1), test_string1) != 0) {
		printf("I don't wanna do it more. Crashed.");
		return failure;
	}
	return OK;
}

void run_all_tests() {
	assert(test_myStrlen() == OK);
	assert(test_myStrcpy() == OK);
	assert(test_myStrchr() == OK);
	assert(test_myStrdub() == OK);
	assert(test_myStrstr() == OK);
	assert(test_myMemchr() == OK);
	assert(test_myMemset() == OK);
	assert(test_myMemcpy() == OK); 
	assert(test_myStrcmp() == OK);
}
