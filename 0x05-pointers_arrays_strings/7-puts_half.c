#include "main.h"

/**
 * puts_half - to print last n chars of string
 * @str: the string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	/**
	 * i - length of string;
	 * n - chars to print;
	 */

	int i;
	int n;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;

	}
	if (i % 2 == 0)
	{
		for (n = i / 2; n <= i; n++)
		{
			_putchar(*(str + n));
		}
	}
	else
	{
		for (n = (i + 1) / 2; n <= i; n++)
		{
			_putchar(*(str + n));
		}
	}
	_putchar('\n');
}
