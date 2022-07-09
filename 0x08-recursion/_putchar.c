#include "main.h"

/**
 * _putchar - Prints the chhar C onto stdout.
 * @c: Is the character being printed out.
 *
 * Return: always 0.
 */
int _putchar(char c)
{
	write(1, &c, 1);
}
