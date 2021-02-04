#include <stdio.h>
/**
 * main - for loop
 * Description: Print alphabet in lowercase.
 * Return: always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
		putchar('\n');

	return (0);
}
