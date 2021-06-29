#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
*
*
* Return: Always (0) (Success)
*/
void print_rev(char *s)
{
	int a = strlen (s);
	int y = 0;
	for (y = a; y > 0; y++)
	{
		printf("%d", *s[y]);
	}
	putchar('\n');
}
