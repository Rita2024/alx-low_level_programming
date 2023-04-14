#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - checks if a string contains a non-digit char
 * @str: the string to be checked
 * Return: result
 */
int is_digit(char *str)
{
	int e = 0;

	while (str[e])
	{
		if (str[e] < '0' || str[e] > '9')
			return (0);
		++e;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @str: the string
 * Return: the string length
 */
int _strlen(char *str)
{
	int e = 0;

	while (str[e] != '\0')
	{
		++e;
	}
	return (e);
}

/**
 * errors - handles errors for main
 * Return: result
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: result
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, e, bring, digit1, digit2, *result, f = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (e = 0; e <= len1 + len2; ++e)
		result[e] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		bring = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			bring += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = bring % 10;
			bring /= 10;
		}
		if (bring > 0)
			result[len1 + len2 + 1] += bring;
	}
	for (e = 0; e < len - 1; ++e)
	{
		if (result[e])
			f = 1;
		if (f)
			_putchar(result[e] + '0');
	}
	if (!f)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
