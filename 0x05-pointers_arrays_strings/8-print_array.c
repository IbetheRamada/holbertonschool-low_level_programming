#include "holberton.h"
#include <stdio.h>

/**
*@a: variable pointer
*@n: variable int
*/
void print_array(int *a, int n)
{
	int y = 0;
	int cont = n;

	cont--;
	for (y = 0; y <= cont; y++)
	{
		printf("%d", a[y]);
		if (y < cont)
		{
		putchar(44);
		putchar(32);
		}
	}
	putchar('\n');
}
