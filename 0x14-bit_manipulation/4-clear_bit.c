#include "main.h"

/**
 * clear_bit - sets a bit at a position to 0
 * @n: number to be used
 * @index: position to be cleared
 *
 * Return: 1 on success, -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & x)
		*n ^= x;

	return (1);
}
