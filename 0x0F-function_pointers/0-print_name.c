#include "function_pointers.h"

/**
 * print_name - print name with function pointers
 * @name: strinng (pointer to char)
 * @f: pointer to function which takes in string
 * Return: NULL (void)
 */

void print_name(char *name, void(*f)(char *))
{
	f(name);
}
