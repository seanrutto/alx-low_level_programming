#include <stdio.h>
/*
 * Main - function begins
 *
 * Function: prints some numbers
 *
 * Return: is always 0
 */
int main(void)
{
	int x;
	for (x='0'; x<='9'; x++)
	{
		putchar(x);
		for (x<9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
