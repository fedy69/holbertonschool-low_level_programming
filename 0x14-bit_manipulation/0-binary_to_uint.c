#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: binary number to convert
 * Return: converted number or 0 if string contains chars not 0 or 1 / NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b < '0' || *b > '1')
			return (0);
		total *= 2;
		if (*b++ == '1')
			total += 1;
	}
	return (total);
}