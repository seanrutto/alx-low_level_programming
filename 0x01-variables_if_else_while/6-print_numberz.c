#include <stdio.h>
/*
 * Main - starts the prog
 *
 * Function: prints numbers
 *
 * Return: is 0 as always
 */
int main(void)
{
	int x;
	for (x=0; x<10; x++)
		putchar('%d', x);
	putchar('\n');
	return (0);
}
