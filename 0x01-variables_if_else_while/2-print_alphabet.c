#include <stdio.h>
/*
 * main - declares start of run
 *
 * Function: Outputs all the letters of the alphabet from a to z
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
