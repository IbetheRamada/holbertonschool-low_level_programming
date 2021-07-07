#include "holberton.h"

/**
*_memcpy - copy a memory area
*@dest: destiny variable
*@src: vairiable that have a string
*@n: bytes
*
*Return: Always (dest) (success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;

	while (a < n)
	{
		dest[a] = &src[a];
		a++;
	}
	return (dest);
}
