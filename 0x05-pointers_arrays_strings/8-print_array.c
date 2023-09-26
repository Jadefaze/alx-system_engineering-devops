#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array
 * @a: the array
 * @n: the number of elements to print
 * Return: Nothing!
 */

void print_array(int *a, int n)
{
	/* determine length */

	int i, j;

	i = j = 0;
	while (*(a + i))
	{
		i++;
	}

	while (j < i && j < n)
	{
		printf("%d", *(a + j));
		j++;
		if (*(a + j))
		{
			printf(", ");
		}
		else
		{
			printf("\n");
			return;
		}
	}
}
