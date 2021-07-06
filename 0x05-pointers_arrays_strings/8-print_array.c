#include "holberton.h"
#include <stdio.h>
/**
*print_array: prints a array
*@a: variable pointer
*@n: variable int
* Return: Always (p) (Success)
*/
void print_array(int *a, int n)
{
	int y = 0;
	int cont = n;
	cont--;
	for(y = 0; y <= cont; y++)
	{
		printf("%d", a[y]);
		if(y < cont)
		{
		putchar(44);
		putchar(32);
		}
	}
}