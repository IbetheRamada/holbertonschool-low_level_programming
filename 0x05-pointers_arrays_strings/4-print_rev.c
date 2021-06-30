#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
*print_rev: print in reverse one string
*@s: variable of string
* Return: Always (p) (Success)
*/
void print_reverse(char *s)
{
	int a = strlen(s);
	int y = 0;
	int r = 0;
	
	char *p[sizeof(a)];

	for (y = (a - 1); y >= 0; y--)
	{
		p[r] = &s[y];
		printf("%c", *p[r]);
		r++;
	}
	
	
	return;
	
	
}
