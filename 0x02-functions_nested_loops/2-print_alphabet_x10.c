#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: to print alphabet x10
 * Return: void Always.
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 1;
	while (i <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
