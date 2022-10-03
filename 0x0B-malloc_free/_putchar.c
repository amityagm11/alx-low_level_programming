#include <unistd.h>
/**
 * _putchar - writes character
 * @c: the character to print
 *
 * Return: on success 1.
 * or error, -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
