#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: prints an integer
 * @b: prints second integer
 *
 * Return: always equal to 0.
 */

void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
