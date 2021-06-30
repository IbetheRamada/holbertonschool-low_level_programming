#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
*print_rev: print in reverse one string
*@s: variable of string
* Return: Always (p) (Success)
*/
void print_rev(char *s)
{
	int a = strlen(s);
	int y = 0;
	int r = 0;
	
	

	for (y = (a - 1); y >= 0; y--)
	{
		s[y];
		printf("%c", *s[y]);
		
	}
	
	
	return;
	
	
}
