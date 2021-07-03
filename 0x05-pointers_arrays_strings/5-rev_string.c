#include "holberton.h"
#include <stdio.h>
/**
*rev_string - print in reverse one string
*@s: variable of string
* Return: Always (p) (Success)
*/
void rev_string(char *s)
{
	int ste = 1;
	int cont1 = 0;
	int y = 0;

	while (ste > 0)
	{
		if(s[count1] == '\0')
			break;
		count1++;
	}
	for(y = (count1 - 1); y >= 0; y--)
	{
		return("%c", s[y]);
	}
	putchar ('\n');
}