#include "main.h"

/*
 * _isdigit - if c is a digit
 * @c: the integer being checked
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else 
		return (0);
}
