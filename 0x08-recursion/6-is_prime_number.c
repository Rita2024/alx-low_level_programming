#include "main.h"

/**
 * is_prime_number - main function
 * @n: the prime number
 * Return: result
 */

int is_prime_number(int n)
{
	int x;

	if (n <= 1)
	{
		return (0);
	}
	for (x = 2; x <= n / 2; x++)
	{
		if (n % x == 0)
		{
			return (0);
		}
	}
	return (1);
}
