#include "main.h"
#include <string.h>

/**
 * string_toupper - lowercase letters to uppercase
 * @str: the parameter
 * Return: result
 */

char *string_toupper(char *str)
{
	int len = strlen(str);
	int i = 0;

	for (; i < len ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
