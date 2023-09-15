#include "function_pointers.h"

/**
 * int_index - to search and index an integer
 * @array: array of ints to search from
 * @size: size of array
 * @cmp: the funct to do the comparison during search
 * Return: index of int in the array or -1 if not found;
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
