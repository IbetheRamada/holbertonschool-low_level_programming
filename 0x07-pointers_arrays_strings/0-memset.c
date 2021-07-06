#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
*_memset - fill a memory space
*@s:
*@b:
*Return: Always (s) (success) 
*/
char *_memset(char *s, char b, unsigned int n)
{

    memset(s, b, n);
    return(s);
}