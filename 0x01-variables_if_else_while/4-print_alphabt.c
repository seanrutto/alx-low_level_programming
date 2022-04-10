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
	for(letter = 'a'; letter <= 'z'; )
	{
	while(letter!='q'|| letter!='e')
	{
		putchar (letter);
		letter ++;
		return (0);
	}
	}
	putchar ('\n');
	return (0);
}
