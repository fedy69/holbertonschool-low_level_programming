#include "search_algos.h"
/**
 * binary_search - searches for a value
 * @array: the array searched through
 * @size: the length of the array
 * @value: value we are looking for
 * Return: index where value is found or -1 if it failed
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, l, j;

	if (array == NULL)
		return (-1);

	for (l = 0, j = size - 1; j >= l;)

	{
		printf("Searching in array: ");
		for (i = l; i < j; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = l + (j - l) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			j = i - 1;
		else
			l = i + 1;
	}
	return (-1);

}
