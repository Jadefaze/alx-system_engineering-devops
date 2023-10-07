#include <stdlib.h>

/**
 * create_array - create char array and initialize it with a char
 * @size: takes size of aaray as input
 * @c: the char to initialize the array
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(c) * size);

	if (!array)
		return (NULL);

	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
