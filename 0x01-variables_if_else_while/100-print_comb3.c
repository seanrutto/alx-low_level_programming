#include <stdio.h>
/*
 * Main - starts function
 *
 * Function: prints some numbers
 *
 * Return: always 0
 */
int main(void)
{
	int x;
	int y;
	for (x='0'; x<='9'; x++)
	{
		for (y='0'; y<='9'; y++)
		{
			putchar (x);
			putchar (y);
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
