#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* array_iterator - function that executes a function given as a parameter
*@size: a size of array
*@array: a int with a array
*@action: a pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
	for (i = 0; i < size; i++)
		action(array[i]);
	}
}
