#include <stdio.h>
/**
 * main - declaration of variables, functions and if functions.
 *Description: Print different types
 * Return: always 0.
 **/
int main(void)
{
	printf("Size of a char : %lu byte(s)\n", sizeof(char));
	printf("Size of a int : %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long));
	printf("Size of float : %lu byte(s)\n", sizeof(float));
	return (0);
}

