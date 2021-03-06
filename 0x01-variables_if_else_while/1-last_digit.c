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
	int LastD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastD = (n % 10);
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LastD);
	}
	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, LastD);
	}
	if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastD);
	}
	return (0);
}
