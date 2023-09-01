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
		n = i / 2;
		while (*(str + n) != '\0')
		{
			_putchar(*(str + n));
			n++;
		}
	}
	else
	{
		n = (i + 1) / 2;
		while (*(str + n) != '\0')
		{
			_putchar(*(str + n));
		}
	}
	_putchar('\n');
}
