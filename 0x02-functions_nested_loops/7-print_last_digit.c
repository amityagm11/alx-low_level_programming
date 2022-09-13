#include "main.h"
/**
 * print_last_digit - return last dig
 * @n : check
 * Return: 0 and 1
 */

int print_last_digit(int n)
{
	int last;

	n = n >= 0 ? n : n * -1;
	last = n % 10;
	_putchar('0' + last);

	return (last);
}
