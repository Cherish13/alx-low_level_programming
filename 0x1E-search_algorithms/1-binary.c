#include "search_algos.h"

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
		int middle = (left + right) / 2;
		
		printf("Searching subarray: ");
		for (int i = left; i <= right; i++)
			printf("%i%s", array[i], i == right ? "\n" : ", ");

		if (array[middle] == value)
	       	{
			return middle;
		}
		else if (array[middle] > value) {
			right = middle - 1;
		}
		else {
			left = middle + 1;
		}
	}
	return (-1);
}
