#include "holberton.h"
#include <stdio.h>
/**
*swap_int - Function to swap two values
*@a: first value to change
*@b: second value to change
* Return: (0)
*/
void swap_int(int *a, int *b);
{
	int *c = *a;

	*a = *b;
	*b = *c;
}
