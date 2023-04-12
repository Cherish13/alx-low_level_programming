#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using
 * the Linear Search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to Search for.
 *       
 * Return: The first index where value is located. Otherwise -1 if
 * value is not present or array is NULL.
 */

int linear_search(int *array, size_t size, int value) 
{
        size_t i;

	if (array == NULL)
       	{
		return (-1);
	}

	for (i = 0; i < size; i++)
       	{
		printf("Comparing %d to %d\n", array[i], value);
		if (array[i] == value)
	       	{
			return (i);
		}
	}
	return (-1);
}

