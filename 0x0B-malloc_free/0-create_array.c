#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
*create_array - create a array with a char
*@size: A unsigned int with the size of the array
*@c: a char
*/
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;
	a = (char *) malloc((sizeof(int) * size));
	if (size == 0)
		return (NULL);
	if (a == NULL)
		return (NULL);
	while (i < size)
		{
			a[i] = c;
			i++;
		}
	return(a);
}