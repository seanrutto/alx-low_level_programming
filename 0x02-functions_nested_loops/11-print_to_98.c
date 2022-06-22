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
	char b= n + '0';
	if (n <= 98 && n > 0)
	{
		_putchar (b);
		n++;
	}

	else if (n <= 0)
	{
		_putchar (b*-1);
		n++;
	}

	else if (n > 98)
	{
		_putchar (b);
		n--;
	}
}
