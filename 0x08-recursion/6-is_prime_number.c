#include "main.h"
#include <stdio.h>

int check_prime(int n, int x);
/**
 * check_prime - main function
 * @n: the prime number
 * @x: parameter
 * Return: result
 */

int check_prime(int n, int x)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % x == 0 && x > 1)
	{
		return (0);
	}
	if ((n / x) < x)
	{
		return (1);
	}
	return (check_prime(n, x + 1));
}

/**
 * is_prime_number - main function
 * @n: the prime number
 * Return: result
 */

int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (check_prime(n, 1));
}
