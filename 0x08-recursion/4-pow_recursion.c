#include "main.h"
/**
 * _pow_recursion - returns value of x raised to power y.
 * @x: value being multiplied.
 * @y: is the poer being raised by.
 * Return: Returns a value of the factorial on success.
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
