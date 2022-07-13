#include "search_algos.h"
/**
 * binary_search_recursive - sub-array to look into
 *
 * @array: sub array to look into
 * @left: value of  lower bound
 * @right: value of  higher bound
 * @value: value to look for
 * Return: int
 */
 int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t m;
	size_t l = 0;
	size_t r = size - 1;

	if (array == NULL)
		return (-1);

	while (array && l <= r)
	{
		m = (l + r) / 2;
		printf("Searching in array: ")
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i != r)
				printf(", ");
			else
				printf("\n");
		}

		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		
	}
	return (-1);
}