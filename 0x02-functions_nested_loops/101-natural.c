#include <stdio.h>
/**
 * main - prints the sum of all multiples of 3 or 5 up to 1024
 * Return: 0 (success)
 */

int main(void)
{
	int p, z = 0;

	while (p < 1024)
	{
		if ((p % 3 == 0) || (p % 5 == 0))
		{
			z += p;
		}
		p++;
	}
	printf("%d\n", z);
	return (0);
}
