#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: argument vector
 * Return: result or NULL (fail)
 */

char *argstostr(int ac, char **av)
{
	int p = 0, i = 0, j = 0, k = 0;

	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			++p;
			++j;
		}
		j = 0;
		++i;
	}

	string = malloc((p * sizeof(char)) + ac + 1);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			string[k] = av[i][j];
			++k;
			++j;
		}
		string[k] = '\n';
		j = 0;
		++k;
		++i;
	}
	++k;
	string[k] = '\0';
	return (string);
}
