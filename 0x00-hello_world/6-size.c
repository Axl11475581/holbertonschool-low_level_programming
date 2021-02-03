#include <stdio.h>
/**
 * main - declaration of variables, functions and if functions.
 *Description: Print different types
 * Return: always 0.
 **/
int main(void)
{
	int intType;
	char charType;
	long int longintType;
	long long int llintType;
	float floatType;

	printf("Size of a char : %zu bytes\n", sizeof(charType));
	printf("Size of a int : %zu bytes\n", sizeof(intType));
	printf("Size of float : %zu bytes\n", sizeof(floatType));
	printf("Size of long int: %zu bytes\n", sizeof(longintType));
	printf("Size of long long int: %zu bytes\n", sizeof(llintType));
	return (0);
}

