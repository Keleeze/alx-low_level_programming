#include "main.h"
/**
 * main - Entry point
 * Description: 'print 10 times the alphabet in lowercase'
 * Return: always 0
 */
void printf_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}

}
