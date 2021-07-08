#include "holberton.h"
/**
*_puts_recursion - Print a string without a loop
*
*@s: a pointer that have a string
*/
void _puts_recursion(char *s)
{
	int cont = 0;

	if (s[cont] != '\0')
	putchar(s[cont]);
	cont++;

}
