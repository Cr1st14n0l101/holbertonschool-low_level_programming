#include "search_algos.h"

/**
 * binary_search - Searches for a valuein an array
 *  of integers using the Binary search algorithm
 * @array: Is a pointer to the first element of the array to search in
 * @size: Is the number of elements in array
 * @value: Is the value to search for
 * Return: The first index where value is located
 *  or -1 if value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1;
	int m = 0;

	if (l > r)
		return (-1);
	while (l <= r)
	{
		print_array(array, l, r);
		m = floor((l + r) / 2);
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}

/**
 * print_array - Print the array
 * @array: Is a pointer to the first element of the array to search in
 * @l: Beggining of the array
 * @r: Ending of the array
 * Return: Void
 */
void print_array(int *array, int l, int r)
{
	printf("Searching in array: ");
	for (; l <= r; l++)
		l == r ? printf("%d", array[l]) : printf("%d, ", array[l]);
	printf("\n");
}
