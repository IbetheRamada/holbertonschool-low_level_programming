#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
*alloc_grid - function that return a pointer to a 2 dimensional array
*@width: a int that have a width
*@height: a int that have a height
*Return: Always (array) (success)
*/
int **alloc_grid(int width, int height)
{
	int **array = NULL;
	int i = 0, j = 0;

	array = malloc((height * sizeof(int)) + 1);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= (height + 2); i++)
	{
	array[i] = malloc((width  * sizeof(int)) + 1);
		if (array[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j <= height; j++)
		{
		array[i][j] = 0;

		printf("%d \n", i);

		}

	}
	return (array);
}
