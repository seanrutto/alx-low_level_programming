#include <stdio.h>
/*
 * main - prog begins
 *
 * Function: prints a few things
 *
 * Return: alwways 0
 */
int main(void)
{
	int x;
	char letters;
	for (x='0'; x<='9'; x++)
		putchar(x);
	for (letters='a';letters<='f'; letters++)
		putchar(letters);
	putchar('\n');
	return (0);
}
