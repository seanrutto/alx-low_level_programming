#include "main.h"

/**
 * _strcmp - compares pointers to two strings.
 *
 * @s1: pointer to the first string to be compared
 * @s2: pointer to the second string
 *
 * Return: positive if str1 > str2, negative if otherwise and 0 if equal.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
