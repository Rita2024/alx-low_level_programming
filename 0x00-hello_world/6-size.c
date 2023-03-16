#include <stdio.h>

/**
 * main - print sizes of data type in c
 *
 * Return: 0 successful
 */

int main(void)
{
	char A;
	int B;
	long int C;
	long long int D;
	float E;

printf("The size of a char: %lu byte(s)\n", (unsigned long)sizeof(A));
printf("The size of a int: %lu byte(s)\n", (unsigned long)sizeof(B));
printf("The size of a long int: %lu byte(s)\n", (unsigned long)sizeof(C));
printf("The size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(D));
printf("The size of a float: %lu byte(s)\n", (unsigned long)sizeof(E));
return (0);
}
