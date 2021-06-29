#include "holberton.h"
#include <stdio.h>
/**
*main - A function that takes a pointer and updates evalue it points to to 98
*
* Return: (0)
*/

int main(void)
{
	int n;
	int *a[98];
	a[0] = &n;
	n = 402;
	printf("n=%d\n", n);
	n = 98;
	printf("n=%d\n", n);
	return (0);

}
