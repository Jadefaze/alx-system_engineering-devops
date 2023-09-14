#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - to print numbers followed by a new line
 * @separator: character to separate the numbers
 * @n: number of params passed (values)
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int num;

	if (n == 0)
		return;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		if (i != n - 1 && separator != NULL)
		{
			printf("%d%s", num, separator);
		}
		else if (i != (n - 1) && separator == NULL)
		{
			printf("%d", num);
		}
		else
		{
			printf("%d\n", num);
		}
	}
	va_end(args);
}
