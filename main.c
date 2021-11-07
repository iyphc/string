#include "string.h"
#include <stdio.h>

//strlen, strcpy, strchr, strdup, strstr, 
//				  memchr, memset, memcpy

/**
 * @file main.c
 * @brief Contains the main function
 */

int main() {
	char string1[] = "abacabab ab";
	char string2[12];
	printf("len = %d\n", myStrlen(string1));
	char* a = myStrcpy(string2, string1);
	printf("strcpy = %s\n", a);
	printf("strcmp = %d\n", myStrcmp(string1, string2));
	printf("strchr = %c\n", *myStrchr(string2, 'b'));
	printf("strdub = %s\n", myStrdup(string1));
	char v[] = "abacala";
	printf("strstr = %s\n", (char*)myStrstr("ababacalacal", "cal"));
	printf("memchr = %s\n", (char*)myMemchr(string1, 'c', myStrlen(string1) + 1));
	printf("memset = %s\n", (char*)myMemset(string1, 'c', 5));
	printf("memcmp = %d\n", myMemcmp("cala", "cal", 3));
	printf("memcpy = %s\n", (char*)myMemcpy(string2, string1, 7));
	return 0; 
}