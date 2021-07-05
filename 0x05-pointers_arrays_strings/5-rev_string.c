#include "holberton.h"
#include <stdio.h>
/**
*rev_string - print in reverse one string
*@s: variable of string
* Return: Always (p) (Success)
*/
void rev_string(char *s)
{
	char *
	int ste = 1;
	int cont1 = 0;
	int y = 0;

	while (ste > 0)
	{
		if(s[cont1] == '\0')
			break;
		cont1++;
	}
	for(y = (cont1 - 1); y >= 0; y--)
	{
		return("%c", s[y]);
	}
	putchar ('\n');
}