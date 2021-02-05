#include <stdio.h>
/**
 * main - print hexadecimals
 * Descriptions: a loop to print base 16 numbers.
 * Return: always 0.
 */
int main(void)
{
	char n;
	char i;

	for (n = 1; n <= 10; ++n)
		putchar(n);
	for (i = 'a'; n <= 'g'; ++i)
		putchat(i);
	putchar('\n');

	return (0);
}
