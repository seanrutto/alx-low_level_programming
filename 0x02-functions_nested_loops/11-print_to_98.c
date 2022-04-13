#include "main.h"

/**
 * print_to_98 - prints all the numbers beyween said number and 98
 *
 *
 *
 * Return: is 0 as always
 */

void print_to_98(int n)
{
	while (n <= 98 && n < 0)
	{
		_putchar (n);
		n++;
	}

	while (n <= 0)
	{
		_putchar (n*-1);
		n++;
	}

	while (n > 98)
	{
		_putchar (n);
		n--;
	}
}
