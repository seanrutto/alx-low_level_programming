#include <stdio.h>
/*
 * Main - declares start of run
 *
 * Function: prints the alphabet in lowercase, followed by a new line
 *
 * Return: always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar ('\n');
	return (0);
}
