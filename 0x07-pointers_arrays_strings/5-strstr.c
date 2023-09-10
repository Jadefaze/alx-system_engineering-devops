#include "main.h"

/**
 * _strstr - locate substring
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to needle
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int size; /*size of needle string*/

	size = 0;
	i = 0;
	while (*(needle + size) != '\0')
	{
		size++;
	}
	for (; *(haystack + i) != '\0'; i++)
	{
		j = 0;
		while (haystack[i] == needle[j] && haystack[i] != '\0')
		{
			if (j + 1 == size)
			{
				return (haystack + i - j);
			}
			j++;
			i++;
		}
	}
	return (0);
}
