#include "main.h"

/**
 * factorial - to find factorial of a number
 * @n: the number
 * Return: factorial or -1 for negative number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
