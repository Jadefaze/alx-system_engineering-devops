#include <stdio.h>
/**
 * main - to print sizes of types
 * Description: will use printf
 * Return: 0 always
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int li;
	float f;
	printf("Size of a char: %i byte(s) \n", sizeof(c));
	printf("Size of an int: %i byte(s) \n", sizeof(i));
	printf("Size of a long int: %i byte(s) \n", sizeof(l));
	printf("Size of a long long int: %i byte(s) \n", sizeof(li));
	printf("Size of a float: %i byte(s) \n", sizeof(f));
	return (0);
}

