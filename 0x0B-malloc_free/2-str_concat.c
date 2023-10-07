#include <stdlib.h>

/**
 * str_concat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to newly allocated memory for new string
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int str_len1, str_len2, j, i;

	str_len1 = str_len2 = i = j = 0;
	while (s1[str_len1] != '\0')
		str_len1++;

	while (s2[str_len2] != '\0')
		str_len2++;

	new_str = malloc(sizeof(char) * (str_len1 + str_len2 + 1));
	if (!new_str)
		return (NULL);

	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new_str[i] = s2[j];
		j++;
		i++;
	}
	new_str[i] = '\0';

	return (new_str);
}
