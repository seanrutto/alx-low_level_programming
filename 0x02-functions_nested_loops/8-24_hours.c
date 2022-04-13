#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
				}
			}
		}
	}
	return (0);
}
