#include "main.h"

/**
 * set_bit - Sets
 * @n:uuuu
 * @index: The index to set the value at - indices start at 0.
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);
	return (1);
}
