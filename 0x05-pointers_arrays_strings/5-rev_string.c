#include "holberton.h"
#include <stdio.h>
/**
*rev_string - print in reverse one string
*@s: variable of string
* Return: Always (p) (Success)
*/
void rev_string(char *s)
{
	int tam = 1;
	int cont1 = 0;
	int y = 0;

	while (tam > 0)
	{
		if(s[cont1] == '\0')
			break;
		cont1++;
	}
	for(y = (count - 1); y >= 0; y--)
	{
		printf("%d", s[y]);
	}
	putchar ('\n');
}