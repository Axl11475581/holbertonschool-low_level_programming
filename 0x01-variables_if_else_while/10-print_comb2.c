#include <stdio.h>
/**
* main - holds the function
* Description: prints the numbers from 00 to 99.
* Return: always 0.
*/
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b < 9; b++)
		{
			putchar (a + '0');
			putchar (b + '0');
			if (a != 9 || b != 9)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n')
	return (0);
}
