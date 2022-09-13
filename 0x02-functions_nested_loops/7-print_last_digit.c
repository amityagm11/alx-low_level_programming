#include "main.h"
/**
 * print_last_digit - return last dig
 * @n : check
 * Return: 0 and 1
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = -1 * (n % 10);
	else
		last = n % 10;

	_putchar(last + '0');

	return (last);
}
