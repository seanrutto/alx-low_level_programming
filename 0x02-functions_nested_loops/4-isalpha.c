#include "main.h"

/**
 * _isalpha - checks the code for an alphabet
 * @c: is an integer by user
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);

	return (0);


}
