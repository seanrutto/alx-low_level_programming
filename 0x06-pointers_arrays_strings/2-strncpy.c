#include "main.h"

/**
 * _strncpy - copies n number of characters from string src to dest
 *
 * @dest: stores the copied string
 * @src: is the string being copied
 * @n: Is the maximum number of characters to be copied from src
 *
 * Return: on success a pointer to the resulting string destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
