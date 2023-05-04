#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: unsigned long int 1
 * @m: unsigned long int 2
 * Return: result
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int XOR = n ^ m;

	while (XOR)
	{
		i++;
		XOR = XOR & (XOR - 1);
	}
	return (i);
}
