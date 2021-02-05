#include <stdio.h>
/**
 * main - holds the loop.
 * Description: loop that prints digits from 0 to 9.
 * Return: always 0.
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; ++n)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
