#include "search_algos.h"
/**
 * binary_search - function that searches for a value in an array of integers
 *
 * @array: an array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: Always i or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);

		printf("%d", array[i]);
		i = l + (r - l) / 2;
		if (array[i + 1] != '\0')
			printf("\n");
		if (array[i] == value)
			r = i - 1;
		else
			l = i + 1;

	}

	return (-1);
}
