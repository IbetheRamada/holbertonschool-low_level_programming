#include "holberton.h"

/**
*_memset - fill a memory space
*@s: Pointer
*@b: char that have a string
*@n: unsigned int
*Return: Always (s) (success)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
