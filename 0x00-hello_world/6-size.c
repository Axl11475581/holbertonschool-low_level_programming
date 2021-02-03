#include <stdio.h>
/**
 * main - declaration of variables, functions and if functions.
 *Description: Print different types
 * Return: always 0.
 **/
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int llintType;
	float floatType;

	printf("Size of a char : %lu bytes\n", sizeof(charType));
	printf("Size of a int : %lu bytes\n", sizeof(intType));
	printf("Size of long int: %lu bytes\n", sizeof(longintType));
	printf("Size of long long int: %lu bytes\n", sizeof(llintType));
	printf("Size of float : %lu bytes\n", sizeof(floatType));
	return (0);
}

