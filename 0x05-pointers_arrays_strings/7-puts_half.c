#include "main.h"
/**
 * puts_half - prints a string
 * @str: pointer
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;

	for (int i = (len + 1) / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
