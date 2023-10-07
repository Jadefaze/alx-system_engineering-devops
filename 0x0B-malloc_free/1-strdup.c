#include <stdlib.h>

/**
 * _strdup - duplicates a string given
 * @str: the string to duplicate
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *str_dup;
	int i, str_len;

	str_len = 0;

	if (str == NULL)
		return (NULL);

	/* size of str */
	while (str[str_len] != '\0')
		str_len++;

	str_dup = malloc(sizeof(char) * (str_len + 1));

	if (!str_dup)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		str_dup[i] = str[i];
	}
	str_dup[i] = '\0';
	return (str_dup);
}