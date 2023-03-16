#include <stdio.h>
/**
 * main -print sizes of data types in c
 *
 * Return: 0 is successful
 */
int main(void) 
{
    printf("The size of int is %zu bytes\n", sizeof(int));
    printf("The size of char is %zu bytes\n", sizeof(char));
    printf("The size of float is %zu bytes\n", sizeof(float));
    printf("The size of double is %zu bytes\n", sizeof(double));
    printf("The size of long is %zu bytes\n", sizeof(long));
    printf("The size of long long is %zu bytes\n", sizeof(long long));
    printf("The size of short is %zu bytes\n", sizeof(short));
    printf("The size of unsigned int is %zu bytes\n", sizeof(unsigned int));
    printf("The size of unsigned char is %zu bytes\n", sizeof(unsigned char));
    printf("The size of unsigned long is %zu bytes\n", sizeof(unsigned long));
    printf("The size of unsigned long long is %zu bytes\n", sizeof(unsigned long long));
    printf("The size of unsigned short is %zu bytes\n", sizeof(unsigned short));
    return (0);
}
