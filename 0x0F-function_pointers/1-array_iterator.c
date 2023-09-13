#include "function_pointers.h"

/**
 * array_iterator - to execute a function on elements of an array
 * @array: the with size_t elements
 * @size: the size of the array
 * @action: the function (the one that calls another)
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
