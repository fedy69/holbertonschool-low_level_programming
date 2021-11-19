#include "main.h"

/**
 * get_endianness - checks endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int x = 1;

	char *y = (char *)&x;

	return (*y + 48);
}