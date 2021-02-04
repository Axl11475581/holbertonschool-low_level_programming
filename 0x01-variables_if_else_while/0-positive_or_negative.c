#include <stdio.h>
#include <time.h>
/**
 * main - declaration of char
 * Description: Print a random number.
 * Return: always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d, %s\n", n, "is positive");
	}
	if (n == 0)
	{
		printf("%d, %s\n", n, "is zero");
	}
	if (n < 0)
	{
		printf("%d, %s\n", n, "is negative");
	}
	return (0);
}

