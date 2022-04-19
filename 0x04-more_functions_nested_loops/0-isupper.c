#include "main.h"

/* _isupper - checks if letter is upppercase
 * @c: the integer to check
 *
 * 
 * Return: is always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
