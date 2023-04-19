#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that print a name
 * @name: input name
 * @f: pointer to function
 * Return: result
 */

void print_name(char *name, void (*f)(char *))
{
	if (name || f)
		f(name);
}
