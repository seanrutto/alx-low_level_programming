#include <stdio.h>
/**
 * main - entry point of program
 *
 * Return: always 0.
 */

int main(void)
{
	int p = 100;
	int i;

	i = 1;
	while (i <= p)
	{
		if (i % 3 == 0 && 1 % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else 
		{
			printf("%d ",i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
