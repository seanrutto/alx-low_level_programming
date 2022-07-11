#include <stdio.h>
#include "main.h"

/**
 * create_array - creates array of char and initailizes it.\
 * @size: The size of the array to be installed.
 * @c: the specific char to initialize the array with.
 *
 * Return: NULL if size == 0 or function fails and pointer to array on success.
 */
char *create_array(unsigned int size. char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
