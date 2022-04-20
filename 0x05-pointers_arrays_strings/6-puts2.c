#include "main.h"

/**
 * puts2 - prints characters in a string followed by new line
 * @str: is a pointer to the characters in our string
 *
 * Return: is always void on success.
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
			_putchar (str[a]);
	}

	_putchar ('\n');
}
