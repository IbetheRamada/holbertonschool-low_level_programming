#include "holberton.h"
#include <stdio.h>
/**
*puts2 - print only very other character of a string.
*@str: variable of string
* Return: Always (p) (Success)
*/
void puts2(char *str)
{
	int ste = 1;
	int count1 = 0;
	int a = 0;

	while (ste > 0)
	{
		if (str[count1] == '\0')
			break;
		count1++;
	}
	for (a = 0; a < count1 ; a = a + 2)
	{
		printf("%c", str[a]);
	}
	putchar('\n');
}
