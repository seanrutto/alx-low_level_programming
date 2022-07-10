#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Is 0 on success and 1 on error.
 */
int main(int argc, char *argv[])
{
	int mul, num1, num2;
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", mul);

	return (0);
}
