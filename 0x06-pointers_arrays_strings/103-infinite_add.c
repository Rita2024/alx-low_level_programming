#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * infinite_add - Add two numbers
 * @n1: parameter 1
 * @n2: parameter 2
 * @r: parameter 3
 * @size_r: parameter 4
 * Return: the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, sum = 0, len1 = strlen(n1), len2 = strlen(n2);
	int i = len1 - 1, j = len2 - 1, k = 0;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		int num1 = (i >= 0) ? n1[i] - '0' : 0;
		int num2 = (j >= 0) ? n2[j] - '0' : 0;

		sum = num1 + num2 + carry;
		carry = sum / 10;
		sum %= 10;

		if (k >= size_r)
		{
			return (0);
		}
		r[k++] = sum + '0';

		i--;
		j--;
	}

	if (k >= size_r)
	{
		return (0);
	}
	r[k] = '\0';
	strrev(r);

	return (r);
}
