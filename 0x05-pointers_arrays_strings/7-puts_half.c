#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints a string
 * @str: pointer
 * Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int i;

	i = (len + 1) / 2;

	for (; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
