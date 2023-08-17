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

	j = 1;
	while (j <= 10)
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar(i + '0');
		}
		for (i = 10; i <=14; i++)
		{	
			_putchar(i%10 + '0');
		}
	_putchar('\n');
	j++;	

	}



}
