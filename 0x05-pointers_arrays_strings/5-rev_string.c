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
	int cont1 = 0;
	int cont2 = 0;
	int y = 0;

	while (s[cont1] != '\0')
	{
		cont1++;
	}
	cont1--;

	for (y = cont1 ; y >= cont2; y--)
	{
		a = s[y];
		j = s[cont2];
		s[y] = j;
		s[cont2] = a;
		cont2++;
	}
}
