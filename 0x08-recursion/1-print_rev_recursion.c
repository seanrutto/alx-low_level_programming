#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The characters in string.
 * Return: Returns a reversed string on success.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
