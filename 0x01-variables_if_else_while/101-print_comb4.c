#include<stdio.h>
/**
*main - Entry point
*Description: 'print all possible combination  of numbers three digits'
*Return: always 0
*/
int main(void)
{
	int n = '0'
	int m = '0'
	int l = '0'
	
	for (l = '0'; l <= '9'; l++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (n = '0'; l <= '9'; l++)
			{
				if (!((n == m) || ( m == l) || (m > n)|| (l  > m)));
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if(! (n == '9' &&  l == '7' && m == '8'))
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
