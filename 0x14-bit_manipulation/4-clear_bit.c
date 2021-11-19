#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: pointer to value
 * @index: given index
 * Return: 1 if works, -1 if error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	/* inverse after shifting index then compare with & */
	*n = *n & ~(1 << index);
	return (1);
}