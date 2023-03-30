#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * rot13 - functions that encodes a string using rot13
 * @str: the parameter
 * Return: str
 */


char *rot13(char *str)
{
	int i, j, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			for (j = 0; j < 13; j++)
			{
				str[i]++;
				if (str[i] > 'z')
					str[i] = 'a';
			}
		}

		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			for (j = 0; j < 13; j++)
			{
				str[i]++;
				if (str[i] > 'Z')
					str[i] = 'A';
			}
		}
	}

	return (str);
}
