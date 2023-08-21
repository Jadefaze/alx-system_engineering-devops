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
	int l;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	/*using the length - i */
	for (l = i - 1; l >= 0; l--)
	{
		_putchar(s[l]);
		l--;
	}
	

	_putchar('\n');
}

