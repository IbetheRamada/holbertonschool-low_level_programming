#include "holberton.h"
#include <stdio.h>
/**
*rev_string - print in reverse one string
*@s: variable of string
* Return: Always (p) (Success)
*/
void rev_string(char *s)
{
		char a, j;
	int ste = 1;
	int cont1 = 0;
	int cont2 = 0;
	int y = 0;

	while (ste > 0)
	{
		if(s[cont1] == '\0')
			break;
		cont1++;
	}
	for(y = (cont1 - 1); y >= 0; y--)
	{
		a = s[y];
		j = s[cont2];
		s[y] = j;
		s[cont2] = a;
		cont2 ++;

	}
	
	
}