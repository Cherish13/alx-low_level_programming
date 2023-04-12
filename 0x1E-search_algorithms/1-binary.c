#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary Search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *     
 * Return: the index where value is located. Otherwise -1 if not present
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, middle;
	int i;

	if (array == NULL)
       	{
		return (-1);
   	}

	while (left <= right)
       	{
		middle = (left + right) / 2;
		
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf("%i%s", array[i], i == right ? "\n" : ", ");

		if (array[middle] < value)
	       	{
			left = middle + 1;
		}
		else if (array[middle] > value)
	       	{
			right = middle - 1;
		}
		else 
		        return (middle);
		
	}
	return (-1);
}
