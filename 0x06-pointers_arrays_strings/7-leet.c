#include "main.h"

/**
 * leet - To encode letter a, e, o, t, l differently
 * @s: the string to manipulate
 *
 * Return: pointer to string;
 */

char *leet(char *s)
{
	int i;
	int j;
	int j2;
	int i2;
	char *lower = "aeotl";
	char *upper = "AEOTL";
	char *leets = "43071";

	i = 0;
	j = 0;

	while (*(s + i))
	{
		i++;
	}

	while (lower[j])
	{
		j++;
	}

	for (i2 = 0; i2 < i; i2++)
	{
		for (j2 = 0; j2 < j; j2++)
		{
			if (s[i2] == lower[j2] || s[i2] == upper[j2])
			{
				s[i2] = leets[j2];
			}
		}
	}
	return (s);
}
