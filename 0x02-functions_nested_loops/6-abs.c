#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _abs(int a)
{
	if (a >= 0)
	{
		_putchar(a);
	}
	else if (a < 0)
	{
		a = a*-1;
		_putchar(a);
	}
	return (0);
}
