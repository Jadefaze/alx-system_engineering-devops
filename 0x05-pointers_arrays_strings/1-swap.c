#include "main.h"

/**
 * swap_int - manipulate value
 *
 * @a: pointer to an int
 * @b: another pointer to int
 * Returns: Nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
