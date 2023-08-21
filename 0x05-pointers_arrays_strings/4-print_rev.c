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
	int index;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	/*using the length - i */
	index = i - 1;
	while (index >= 0)
	{
		_putchar(s[index]);
		index--;

	}


	_putchar('\n');
}
