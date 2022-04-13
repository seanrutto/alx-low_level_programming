#include "main.h"

/**
 * _abs - check the code and output the absolute number
 * @a: is an integer by user
 *
 * Return: Always 0.
 */
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else if (a < 0)
	{
		return (-a);
	}
	return (0);

}
