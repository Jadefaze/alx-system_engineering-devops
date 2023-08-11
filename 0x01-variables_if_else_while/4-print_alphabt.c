#include <stdio.h>

/**
 * main - entry point
 * Description: to print a-z but not q, e
 *
 * Return: 0 Always
 */

int main(void)
{
	char alpha_char;

	alpha_char = 97;

	while (alpha_char <= 122)
	{
		if (alpha_char != 101)
		{
			if (alpha_char != 113)
			{
				putchar(alpha_char);
			}
		}
		alpha_char++;
	}

	putchar('\n');

	return (0);
}
