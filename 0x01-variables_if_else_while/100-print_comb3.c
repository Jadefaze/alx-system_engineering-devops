#include <stdio.h>

/**
 * main - entry point
 * Description: to print 0, 1, ...9
 *
 * Return: 0 Always
 */

int main(void)
{
	int num1;
	int num2;

	num1 = 0;

	for (num2 = 0; num2 <= 9; num2++)
	{
		for (num1 = 0; num1 <= 9; num1++)
		{
			if (num2 < num1)
			{
				putchar(num2 + '0');
				putchar(num1 + '0');
				if (num2 == 8 && num1 == 9)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	return (0);
}
