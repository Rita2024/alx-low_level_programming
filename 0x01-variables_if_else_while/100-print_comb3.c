#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int i;
	int r;

	for (i = 0 ; i < 10 ; i++)
	{
		for (r = 1 ; r < 10 ; r++)
		{
			if (i < r && i != r)
			{
				putchar(i + '0');
				putchar(r + '0');
				if (i + r != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
