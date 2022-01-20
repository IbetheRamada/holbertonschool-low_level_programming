#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 *
 * @array: an array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: Always i or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			break;
	}
	if (i == size)
		return (-1);
	return (i);
}
