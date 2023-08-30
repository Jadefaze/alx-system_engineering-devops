#include "main.h"

/**
 * rev_string - print string in reverse
 *
 * @s: the string to print
 *
 * Return: reversed string
 */

void rev_string(char *s)
{
	/**
	 * i - size of string
	 * start - beginning of string
	 * end - end of string
	 */

	int i, start, end;
	char temp = 0;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	start = 0;
	end = i - 1;

	/*iterate in reverse */

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}

}
