#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
*print_rev: print in reverse one string
*@s: variable of string
* Return: Always (p) (Success)
*/
void print_reverse(char *s, char *p)
{
	int a = strlen (s);
	int y = 0;
	int r = 0;

	for (y = a; y > 0; y--)
	{
		p[r] = s[y];
		r++;
	}
	s = p;
	return (p);
	
	
}
