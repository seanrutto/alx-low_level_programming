#include <stdio.h>
/*
 * main - declares start of run
 *
 * Function: prints all the letters
 *
 * Return: always o
 */
int main(void)
{
	char letter;
	for(letter = a; letter <= z; letter++)
	{
		putchar("%c\n", letter);
	}
	return (0);
}
