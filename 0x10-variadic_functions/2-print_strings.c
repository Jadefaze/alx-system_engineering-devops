#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - to print strings
 * @separator: char to separate the strings
 * @n: number of strings passed
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *strng;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		strng = va_arg(args, char *);
		if (strng == NULL)
			strng = "(nil)";
		if (i != (n - 1) && separator != NULL)
			printf("%s%s", strng, separator);
		else if (i != (n - 1))
			printf("%s", strng);
		else
			printf("%s\n", strng);
	}
	va_end(args);
}
