#include <stdio.h>
/**
 *main - declaratio
 *Description: Print different sizes
 *Return: always 0.
 **/
int main(void)
{
	printf("Size of a char : %ld byte(s)\n", sizeof(char));
	printf("Size of a int : %ld byte(s)\n", sizeof(int));
	printf("Size of long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of float : %ld byte(s)\n", sizeof(float));
	return (0);
}
