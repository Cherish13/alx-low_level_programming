#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Search for a value in a sorted array of integers using
 * the jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in 'array'.
 * @value: The value to search for.
 *       
 * Return: The first index where 'value' is located. Otherwise -1 if value
 * is not present or array is NULL.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, start, end;

	if (!array || size == 0)
		return (-1);

	end = sqrt(size);

	for (i = start = 0; start < size && array[start] < value;)
	{
		printf("Value check array[%lu] = [%d]\n", start, array[start]);
		i = start;
		start += end;
	}
	printf("Value found between indexes [%lu] and [%ld]\n", i, start);

	start = start < size - 1 ? start : size - 1;
	for (; i < start && array[i] < value; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	if (array[i] == value)
		return (i);

	return (-1);
}
