#include "main.h"

/**
 * _strlen_recursion - returns length of a string.
 * @s: String being counted.
 * Return: Returns length of string on success.
 */
int _strlen_recursion(char *s)
{
	int count = 0;
	
	if (*s)
	{
		count++;
		_strlen_recursion(s + 1);
	}

	return (count);
}
