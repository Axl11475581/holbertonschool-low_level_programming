#include <stdio.h>
/**
 * main - prints the alphabet without 2 letters
 * Description: does not print 2 letters in the alphabet.
 * Return: always 0.
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'q' && c != 'e')
		{	putchar(c);
		}
	}
	putchar('\n');

	return (0);
}
