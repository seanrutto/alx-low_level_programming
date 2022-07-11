#include "main.h"
#include <stdio.h>

/**
 * _strdup - returns pointer to a newly-allocated space in memory containing a copy of the string given as a parameter.
 * @str: The string to e copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL. Otherwise a pointer to duplicated string.
 */
char *strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return NULL;

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc(sizeof9char) * (len + 1);

	if (duplicate = NULL)
		return NULL;

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[len] = '\0';

	return (duplicate);

}
