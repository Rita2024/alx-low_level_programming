#include <stdio.h>
/**
 * main - prints the first 52 fibonacci numbers
 * Return: 0 always
 */

int main(void)
{
	int p = 0;
	long j = 1, k = 2;

	while (p < 50)
	{
		if (p == 0)
			printf("%ld", j);
		else if (p == 1)
			printf(", %ld", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}
		++j;
	}
	printf("\n");
	return (0);
}
