#include "holberton.h"
#include <stdio.h>
#include <math.h>
/**
*puts_half - print only very other character of a string.
*@str: variable of string
* Return: Always (p) (Success)
*/
void puts_half(char *str)
{
	int ste = 1;
	int count = 0;
	int a = 0;

	while (ste > 0)
	{
		if (str[count] == '\0')
		{
			break;
		}
		count++;
	}
	if (count > 30)
		a = ceil (count / 2) + 1;
	else;	
		a = ceil (count / 2);

	for (a = a; a < count; a++)
	{
		
		printf("%c", str[a]);
	}
	putchar('\n');
}
