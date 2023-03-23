#include "main.h"
/**
 * _isdigit - function that check if it is a digit
 * @c: function to be checked
 * Return: 1 if it is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 65)
	{
		return (1);
	}
	return (0);
}
