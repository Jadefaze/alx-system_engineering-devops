#include "main.h"
/**
 *  more_numbers - to print 0-14
 *
 * Return: void nuthing
 */

void more_numbers(void)
{
	int i;
	int j;

	for (j = 1; j <= 10; j++)
	{
		i = 0;
		while (i <= 14)
		{
			if (i > 9)
			{
				_putchar(49);
			}
			_putchar(i % 10 + '0');
			i++;
		}
		_putchar('\n');
	}
}
