#include <stdlib.h>

/**
 * _strdup - duplicates a string given
 * @str: the string to duplicate
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *str_dup;
	int i;

	i = 0;
	str_dup = malloc(sizeof(*str));

	if (!str_dup)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		str_dup[i] = str[i];
		i++;
	}
	str_dup[i] = '\0';
	return (str_dup);
}
