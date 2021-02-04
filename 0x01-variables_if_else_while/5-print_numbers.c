#include <stdio.h>
/**
 * main - holds the bucle.
 * Description: a bucle that prints single digit numbers of base 10.
 * Return: always 0.
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; ++n)
		printf("%d", n);
	putchar('\n');
	return (0);
}
