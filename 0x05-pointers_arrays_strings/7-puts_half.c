#include "holberton.h"
#include <stdio.h>
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
	for (a = (count / 2) + 1; a < count; a++)
	{
		printf("%c", str[a]);
	}
	putchar('\n');
}
