#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: parameter
 * Return: result
 */

char *leet(char *str)
{
	int i, j;
	char c;
	char *result = str;
	char leet_map[5][3] = {{'a', 'A', '4'},
		{'e', 'E', '3'},
		{'o', 'O', '0'},
		{'t', 'T', '7'},
		{'l', 'L', '1'}};

	for (i = 0; i < 5; i++)
	{
		for (j = 0; str[j]; j++)
		{
			c = str[j];
			if (c == leet_map[i][0] || c == leet_map[i][1])
			{
				str[j] = leet_map[i][2];
			}
		}
	}

	return (result);
}
