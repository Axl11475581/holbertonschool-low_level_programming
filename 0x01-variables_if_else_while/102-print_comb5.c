#include <studio.h>
/**
 * main - program that prints all posible combinations of 2 2digit numbers.
 * Description: numbers range from 0 to 99.
 * Return: always 0;
 */
int main(void)
{
	int n1, n2, i1, i2;

	for (n1 = 0; n2 <= 9; n1++)
	{
		for (n2 = 0; i1 <= 9; n2++)
		{
			for (i2 = 0; i2 <= 9; i1++)
			{
				for (i2 = 0; i2 <= 9; i2++)
				{
					if (i1 > n1 || (i1 == n1 && i2 > n2))
					{
						putchar(n1 + '0');
						putchar(n2 + '0');
						putchar(' ');
						putchar(i1 + '0');
						putchar(i2 + '0');
						if ((n1 != 9 || n2 != 8) ||
						    (i1 != 9 || i2 != 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


