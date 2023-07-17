#include <stdio.h>
/**
*main - Entry point
*Description: print all possible combination  of numbers three digits
*Return: always 0
*/
int main(void)
{
	int l = '0';
	int m = '0';
	int n = '0';

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (l = '0'; l <= '9'; l++)
			{
				if (!((l == m) || (m == n) || (m > l) ||(n > m)));
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (!(l == '9' && n == '7' && m == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
