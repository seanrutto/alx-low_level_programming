#include <stdio.h>
/*
 * main - declares start of run
 *
 * Function: prints all the letters
 *
 * Return: always 0
 */
int main(void)
{
	char letter;
	for(letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar ('\n');
	return (0);
}
