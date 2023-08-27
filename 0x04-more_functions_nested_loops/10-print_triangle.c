#include "main.h"

/**
 * print_triangle - to print a triangle with #
 *
 * @size: takes in the size of the triangle
 * Return: nothng
 */

void print_triangle(int size)
{
	int i;
	int spaces;
	int num_chars;

	if (size < 0 || size == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (spaces = 1; spaces <= size - i; spaces++)
			{
				_putchar(32);
			}
			for (num_chars = 1; num_chars <= i; num_chars++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}


	}
}
