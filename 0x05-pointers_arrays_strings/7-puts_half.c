#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: is apointer to the characters in our string
 *
 * Return: is always void on success.
 */

void puts_half(char *str)
{
	int i, last;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	last = (i + 1) / 2;

	for (i = last; str[i]; i++)
	{
		_putchar (str[i]);
	}

	_putchar ('\n');
}
