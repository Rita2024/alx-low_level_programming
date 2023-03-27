#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: the string of the length to get from
 * Return: the length of the @str
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
