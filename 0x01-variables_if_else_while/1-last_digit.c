#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - number randomizer with if function
 * Description: Print the last digit of the number stored in the n variable.
 * Return: always 0.
 */
int main(void)
{
	int n;

	lastDigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %s is %d and is greater than 5\n", n, lastDigit);
	}
	if (n == 0)
	{
		printf("Last digit of %s is %d and is 0\n", n, lastDigit);
	}
	if (n < 6 && != 0)
	{
		printf("Last digit of %s is %d and is less than 6 and not 0\n", n, lastDigit);
	}
	return (0);
}
