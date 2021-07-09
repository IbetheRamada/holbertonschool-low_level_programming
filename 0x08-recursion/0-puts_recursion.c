#include "holberton.h"
#include <stdio.h>
/**
*_puts_recursion - Print a string without a loop
*
*@s: a pointer that have a string
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return('\n');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}