#include <stdio.h>
/**
 * main - holds the function
 * Description: prints all possible combinations of single-digit numbers.
 * Return: Always 0.
 */
int main(void)
{
	int x;

	for (x = 0; i <= 9; x++)
	{
		putchar(x + '0');
		if (x != 9)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}