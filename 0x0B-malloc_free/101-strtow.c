#include <stdlib.h>
#include "main.h"

/**
 * count_word - function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int words, r, t;

	words = 0;
	t = 0;

	for (r = 0; s[r] != '\0'; r++)
	{
		if (s[r] == ' ')
			words = 0;
		else if (words == 0)
		{
			words = 1;
			t++;
		}
	}

	return (t);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **work, *hard;
	int r, e = 0, len = 0, words, p = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	work = (char **) malloc(sizeof(char *) * (words + 1));
	if (work == NULL)
		return (NULL);

	for (r = 0; r <= len; ++r)
	{
		if (str[r] == ' ' || str[r] == '\0')
		{
			if (p)
			{
				end = r;
				hard = (char *) malloc(sizeof(char) * (p + 1));
				if (hard == NULL)
					return (NULL);
				while (start < end)
					*hard++ = str[start++];
				*hard = '\0';
				work[e] = hard - p;
				++e;
				p = 0;
			}
		}
		else if (p++ == 0)
			start = r;
	}

	work[e] = NULL;

	return (work);
}
