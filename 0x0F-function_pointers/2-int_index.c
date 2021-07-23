#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* int_index - 
*@size: a size of array
*@array: a int with a array
*@cmp: a pointer
*Return: return a int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
		int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) == 1)
			{
				return (i);
			}
		}
	}
	return (-1);
}