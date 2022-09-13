#include "main.h"

/**
 * print_alphabet_x10 - 10x_alphabet
 * Description: prints lowercase alphabet x10
 * Return:0
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i <= 9)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		i++;
		c = 'a';
	}
}
