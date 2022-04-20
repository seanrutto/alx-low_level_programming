#include "main.h"

/**
 * _puts - prints string followed by new line to stdout
 * @str: is a pointer to our string characters
 *
 * Return: is 0 when correct.
 */

void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m =0; c[m]; m++)
	{
		_putchar (c[m]);
	}
	_putchar ('\n');
}
