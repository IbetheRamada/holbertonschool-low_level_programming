#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
*_strcpy - copy a string
*@dest: variable pointer
*@src: variable int
*Return: Always (dest) (success)
*/
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
