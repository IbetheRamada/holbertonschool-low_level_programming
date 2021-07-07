#include "holberton.h"

/**
*_memset - fill a memory space
*@s:
*@b:
*Return: Always (s) (success) 
*/
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;
	for (a = 0; a <= n; a++)
	{
		s[a] = b;
	}
	return(s);
}