#include "main.h"

/**
 * cap_string - To capitalize first letter of words in string
 * @s: the string to capitalise (words)
 *
 * Return: pointer to string;
 */

char *cap_string(char *s)
{
	int i;
	char prev;

	i = 0;
	while (*(s + i))
	{
		prev = *(s + i - 1);
		if (prev == 32 || prev == 9 || prev == 10 || prev == 44
			|| prev == 59 || prev == 46 || prev == 63
			|| prev == 34 || prev == 40 || prev == 41 || prev == 123 || prev == 125)
		{
			if (*(s + i) >= 97 && *(s + i) <= 122)
			{
				*(s + i) -= 32;
			}
		}
		i++;
	}

	return (s);
}
