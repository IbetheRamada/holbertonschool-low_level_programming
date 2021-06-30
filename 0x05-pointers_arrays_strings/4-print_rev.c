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
	/*in this point i will print a string in reverse.*/

	int tam = 1;
	int cont1 = 0;
	int y = 0;

	while (tam > 0)
	{
	if (s[cont1] == '\0')
	break;
	cont1++;
	}


	for (y = (cont1 - 1); y >= 0; y--)
	{

	printf("%c", s[y]);


	}
	putchar ('\n');

}
