#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
*_strlen - function to return the length of a string.
*@s 
* Return: (0)
*/
int _strlen(char *s)
{
	int longitud = strlen (s);
	printf("%d", longitud);	
	return(0);
}