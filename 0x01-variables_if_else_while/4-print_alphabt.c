#include <stdio.h>
/*
 * main - start of function 
 *
 * Function: prints some letters
 *
 * Return: is always 0
 */
int main(void)
{
	char letter;
	letter = 'a';
	for(letter = 'a'; letter <= 'z'; letter++)
	{
	while(letter!='q'|| letter!='e')
	{
		putchar (letter);
	}
	}
	putchar ('\n');
	return (0);
}
