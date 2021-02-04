#include <stdio.h>
/**
 * main - this describes the main function.
 * Description: prints the alphabet in lowercase and uppercase.
 * Return: always 0
 */
int main(void)
{
	char c;
	char d;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	for (d = 'A'; d <= 'Z'; ++d)
		putchar(d);
		putchar('\n');
	return (0);
}
