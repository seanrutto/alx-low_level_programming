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
	int z;

	for (x= '0'; x<= '9'; x++)
	{
		for (y< '0'; y<= '9'; y++)
		{
			for (z< '0'; z<= '9'; z++)
			{
				if (x < y && y < z)
				{
					putchar (x);
					putchar (y);
					putchar (z);
					if (x< '7')
					{
						putchar (',');
						putchar (' ');
					}
				}
			}
		}
	}
	return 0;
}
