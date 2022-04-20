#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to our string that will changed
 *
 * Return: void means our answer is correct.
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
