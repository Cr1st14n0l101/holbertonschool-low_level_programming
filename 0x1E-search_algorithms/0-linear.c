#include "search_algos.h"

/**
 * linear_search - Searches for a valuein an array
 *  of integers using the Linear search algorithm
 * @array: Is a pointer to the first element of the array to search in
 * @size: Is the number of elements in array
 * @value: Is the value to search for
 * Return: The first index where value is located
 *  or -1 if value is not present in array or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;
	int size_int = size;

	for (; i != size_int; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
