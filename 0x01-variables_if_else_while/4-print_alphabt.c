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
	letter='a';
	while(letter!='q'|| letter!='e')
	{
	for(letter='a'; letter<= 'z'; letter++ )
	{
		putchar (letter);
	}
	return (0);
	}
	putchar ('\n');
	return (0);
}
