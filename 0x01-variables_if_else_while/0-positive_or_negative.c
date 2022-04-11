#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Function: assign randomm number to  n each time it is executed
 *
 * Return: always Zero (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
