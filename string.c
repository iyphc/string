#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "string.h"

//strlen, strcpy, strchr, strdup, strstr, 
//				  memchr, memset, memcpy

/**
 * @file string.c 
 * @brief The library that contains imitation of <String.h>
 */

/**
 * @brief Length of the string
 * @details Finds the length of the string
 * @param source The string 
 * @return Length of the string
 */
int myStrlen(char* source) {
	if(source == NULL) {
		return NULL;
	}
	int i = 0;
	while (source[i] != '\0') {
		i++;
	}
	return i;
}

/**
 * @brief Compares strings
 * @details Compares string for similaruty
 * @param source The first string to compare
 * @param source The second string to compare
 * @return Returns 0 if they are equals or retuns any other number 
 */

int myStrcmp(char* string1, char* string2) {
	if (string1 == NULL) {
		return NULL;
	}
	if (string2 == NULL) {
		return NULL;
	}
	while (*string1 && (*string1 == *string2)) {
		string1++; string2++;
	}
	return *string1 - *string2;
}

/**
 * @brief Copies the string
 * @details Copies symbols from the first string to the second string 
 * @param target The string to copy to
 * @param source The string from which is being copied
 * @return The pointer of the string
 */

char* myStrcpy(char* target, char* source) {
	if(source == NULL) {
		return NULL;
	}	
	if(target == NULL) {
		return NULL;
	}
	//assert(mystrlen(target) >= mystrlen(source));
	for (int i = 0; i <= myStrlen(source); i++) {
		target[i] = source[i]; 
	}
	return target;
} 

/**
 * @brief Searhing for a character in the string
 * @param source The string in which the character is being searched
 * @param ch Symbol to search for
 * @return Return the pointer of the required character or NULL
 */

char* myStrchr (char *source, int ch) {
	if(source == NULL) {
		return NULL;
	}
	for (int i = 0; i < myStrlen(source); i++) {
		if (*source == (char)ch) {
			return source;
		}
		source++;
	}
	return NULL;
}

/**
 * @brief Dublicates the string
 * @details Dublocates symbols from the first string to the new string 
 * @param source The string from which is being dublicated
 * @return The pointer to the first character from the string
 */

char* myStrdub(char* source) { //НУЖНО ПРОПИСАТЬ ОЧИСТКУ
	if(source == NULL) {
		return NULL;
	}
	char* target = malloc(myStrlen(source));
	myStrcpy(target, source);
	return target;
}

/**
 * @brief Looks for the substring in the string 
 * @param source The string in which the substring is searched 
 * @param value The substring which is searched for in the string
 * @return The pointer to the begining of the substring in the string  
 */

char* myStrstr(char* source, char* value) {
    if(source == NULL) {
		return NULL;
	}
	if(value == NULL) {
		return NULL;
	}
    if (myStrlen(value) == 0) {
        return (char *) source;
    }
    while (*source != '\0') {
        if (*source == *value) {
            while (*source == *value) {
                ++source;
            }
            return (--source);
        }
        source++;
    }
    return NULL;
}

/**
 * @brief Searhing for a character in a string
 * @param source The string in which the character is being searched
 * @param ch Symbol to search for
 * @return Return the position (number) of the required character or NULL
 */

void* myMemchr(char* source, int a, size_t n) {
	if(source == NULL) {
		return NULL;
	}
	for (int i = 0; i < n; i++) {
		if (source[i] == a) {
			return (void*)(i + 1);
		}
	}
	return NULL;
}

/**
 * @brief Replaces characters in a string
 * @details Replaces the required number of characters in the string
 * @param source The string from which the required character is replaced 
 * @param c
 * @param n
 * @return 
 */

void* myMemset(void *source, int c, size_t n) {
	if(source == NULL) {
		return NULL;
	}
	char* target = source;
	for (int i = 0; i < n; i++) {
		target[i] = (char)c;
	}
	return (void*)target;
}

/**
 * @brief Copies the string
 * @details Copies symbols from the first string to the second string 
 * @param target The string to copy to
 * @param source The string from which the required numbers of characters is copied
 * @return The pointer of the string
 */

void *myMemcpy (void *target, const void *source, size_t n) {
	if(source == NULL) {
		return NULL;
	}
	if(target == NULL) {
		return NULL;
	}
	if(myStrlen(source) < n) {
		return NULL;
	}
	else {
		int i = 0;
		for(i = 0; i < n; i++) {
			((char*)target)[i] = ((char*)source)[i];
		}
		((char*)target)[i] = '\0';
	}
	return (void*)target;
}