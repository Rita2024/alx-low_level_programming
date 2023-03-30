#include "main.h"
#include <ctype.h>

/**
 * cap_string - functions that capitalizes all words of a string
 * @str: the parameter
 * Return: result
 */

char *cap_string(char *str)
{
	int i = 0;
	int new_word = 1;

	while (str[i] != '\0')
	{
		if (new_word && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			new_word = 0;
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			new_word = 1;
		}
		i++;
	}
	return (str);
}
