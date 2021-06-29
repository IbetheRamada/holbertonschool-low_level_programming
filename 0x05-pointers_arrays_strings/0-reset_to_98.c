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
	
	
	n = 402;
	printf("n=%d\n", n);
	int *reset_to_98[1] = &n;
	n = 98;
	printf("n=%d\n", n);
	return (0);

}
