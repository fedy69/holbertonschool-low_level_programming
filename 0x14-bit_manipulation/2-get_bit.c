#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: bit
 * @index: given index
 * Return: value of bit at index or -1 if error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return (n >> index & 1);
}