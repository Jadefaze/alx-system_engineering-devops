#include "main.h"

/**
 * print_rev - print string in reverse
 *
 * @s: the string to print
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	/*find length */

	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	/*using the length - i */
	while (i > 0)
	{
		_putchar(*(s + i));
		i--;
	}

	_putchar('\n');
}

