#include "main.h"
#include <stdio.h>

/**
 * set_string - functiins that set a pointer to char
 * @s: the value of the pointer
 * @to: the pointer
 * Return: the result
 */

void set_string(char **s, char *to)
{
	*s = to;
}
