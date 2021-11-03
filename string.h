#include <stdlib.h>

/**
 * @file string.h
 * @brief Contains function prototypes
 */

int myStrlen(char* source);
int myStrcmp(char* string1, char* string2);
int myMemcmp(char* string1, char* string2,  size_t n);
char* myStrcpy(char* target, char* source);
char* myStrchr(char *source, int ch);
char* myStrdub(char* source);
char* myStrstr(char* source, char* value);
void* myMemchr(char* source, int a, size_t n);
void* myMemset(void *source, int c, size_t n);
void *myMemcpy(void *target, const void *source, size_t n);