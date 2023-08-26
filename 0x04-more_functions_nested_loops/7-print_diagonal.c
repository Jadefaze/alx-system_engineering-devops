#include "main.h"

/**
 * print_diagonal - to print a diagonal with \
 *
 * @n: takes in the length of the diag
 * Return: nothng
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n < 0 || n == 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 1;
		while (i <= n)
		{
			j = 1;
			while (j <= i)
			{
				_putchar(32);
				j++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
}
