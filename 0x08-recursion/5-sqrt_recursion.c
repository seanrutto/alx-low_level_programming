#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number whose square root we are seeking.
 * Return: should be the square root on success and -1 if fail.
 */
int find_sqrt(int num, int root);
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}

/**
 * find_sqrt - finds square root of a number.
 * @num: The number to find square root of.
 * @root: Root to be tested.
 *
 * Return: Returns square root if natural anf -1 if not.
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}
