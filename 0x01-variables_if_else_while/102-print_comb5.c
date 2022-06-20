#include <stdio.h>

int main()
{
	int a;
	int b;
	int x;
	int y;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			putchar (a);
			putchar (b);
			putchar (' ');

			for (x = '0'; x <= '9'; x++)
			{
				for (y = '0'; y <= '9'; y++)
				{
					putchar (x);
					putchar (y);
					putchar (',');
					putchar (' ');
				}
			}
		}
	}

	putchar ('\n');
	return (0);
}
