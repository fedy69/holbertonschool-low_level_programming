#include "search_algos.h"
/**
 *linear_search - searches an element in an array linearly
 *
 * @array: pointer t ostart of array
 * @size: size of initial array
 * @value: value to search for
 * Return: int
 */
 int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int value_index = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			value_index = i;
			break;
		}
		else
		{
			value_index = -1;
		}
		i++;
	}
	return (value_index);
}