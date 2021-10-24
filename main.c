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
	printf("strchr = %c\n", *myStrchr(string2, 'b'));
	printf("strdub = %s\n", myStrdub(string1));
	char v[] = "cab";
	printf("strstr = %s\n", (char*)myStrstr(string1, "cab"));
	printf("memchr = %d\n", myMemchr(string1, 'c', myStrlen(string1) + 1));
	printf("memset = %s\n", myMemset(string1, 'c', 5));
	(char*)myMemcpy(string2, string1, 7);
	printf("memcpy = %s\n", string2);
	return 0; 
}