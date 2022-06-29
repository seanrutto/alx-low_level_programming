#include "main.h"

/**
 * reverse-array - reverses content of an array
 *
 * @a: the array to be reversed.
 * @n: Thr number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n -1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
