#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: is a pointer to the memory area.
 * @b: is the constant byte.
 * @n: is the number of bytes.
 *
 * Return: is a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory - s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
