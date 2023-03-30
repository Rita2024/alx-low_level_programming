#include <ctype.h>
#include "main.h"

/**
 * cap_string - functuons that capitalizes the words of a string
 * @str: parameter
 * Return: result
 */

char *cap_string(char *str)
{
	int cap_next = 1;
	char *p = str;

	while (*p != '\0')
	{
		if (isspace(*p) || *p == ',' || *p == ';' || *p == '.' ||
*p == '!' || *p == '?' || *p == '"' ||
*p == '(' || *p == ')' || *p == '{' || *p == '}')
		{
			cap_next = 1;
		} else if (cap_next)
		{
			*p = toupper(*p);
			cap_next = 0;
		}
		p++;
	}

	return (str);
}
