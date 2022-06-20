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
			if (y > x)
			{
				putchar (x);
				putchar (y);
				if (x < '8')
				{
				putchar (',');
				putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
