#include "main.h"

/**
 * string_toupper - convert lowercase chars to upper
 * @s: pointer to string
 * Return: pointer to s;
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 97 && *(s + i) <= 122)
		{
			*(s + i) -=  32;
		}
		i++;
	}
	return (s);
}
