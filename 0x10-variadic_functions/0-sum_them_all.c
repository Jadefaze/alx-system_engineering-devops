#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a func to sum all args passed to it
 * @n: expected number of args (positive ofcourse)
 * Return: Always 0; for no rags, otherwise return the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum_args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	sum_args = 0;
	for (i = 0; i < n; i++)
	{
		sum_args += va_arg(args, int);
	}
	va_end(args);
	return (sum_args);
}
