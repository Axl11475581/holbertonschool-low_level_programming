#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - print hexadecimals
 * Descriptions: a loop to print base 16 numbers.
 * Return: always 0.
 */
int main(void)
{
	int n;
	char i;

	for (n = 0; n <= 10; n++)
	{
		putchar(n + '0');
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
