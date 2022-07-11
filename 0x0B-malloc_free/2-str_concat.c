#include "main.h"
#include <stdio.h>

/**
 * str_concat -n Concantenates two strings.
 * @s1: The string to be contenated upon.
 * @s2: The string to be contatenated to s1.
 *
 * Return: is a pointer ro newly-allocated memory space with concatenated strings and NULL if fail.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int index, concatindex = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 = NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	concat_str = malloc(sizeof(char) *len);

	if (concat_str == NULL)
		return NULL;

	for (index = 0; s1[index]; index++)
		concat_str[concar_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat_str[concat_index++] = s2[index];

	return (concat_str);
}
