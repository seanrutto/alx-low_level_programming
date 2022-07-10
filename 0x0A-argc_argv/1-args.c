#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Returns: Always 0 on success.
 */
int main(int argc, char _attribute_((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
