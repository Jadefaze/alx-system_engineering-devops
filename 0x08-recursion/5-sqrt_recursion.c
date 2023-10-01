#include "main.h"

/**
 * _sqrt_recursion - to find perfect square root
 * @n: the number whose root we want
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_recursion_helper(n, 0));
}
/**
 * _sqrt_recursion_helper - function to check for roots
 * @n: the number we wants roots for
 * @guess: possible root
 * Return: correct guess or -1;
 */

int _sqrt_recursion_helper(int n, int guess)
{
	if ((guess * guess) > n)
		return (-1);
	else if ((guess * guess) == n)
		return (guess);
	else
		return (_sqrt_recursion_helper(n, guess + 1));
}

