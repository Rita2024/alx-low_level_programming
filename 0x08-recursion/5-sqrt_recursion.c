#include "main.h"
#include <stdio.h>

int _sqrt(int n, int x);
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: natural square root of the number to be calculated
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt(n, 1));
	}
}

/**
 * _sqrt - main function
 * @n: natural square root of the number to be calculated
 * @x: parameter
 * Return: the result
 */

int _sqrt(int n, int x)
{
	int sqrt = x * x;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (x);
	return (_sqrt(n, x + 1));
}
