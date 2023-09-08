#include "main.h"

/**
 * reverse_array - to reverse contents of array
 * @a: pointer to array
 * @n: size of array
 * return: void
 */

void reverse_array(int *a, int n)
{
	int temp, start, end;

	temp = 0;
	start = 0;
	end = n - 1;

	while (start < end)
	{
		temp = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = temp;
		start++;
		end--;
	}
}
