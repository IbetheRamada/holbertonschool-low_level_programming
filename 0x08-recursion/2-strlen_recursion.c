#include "holberton.h"
/**
* _strlen_recursion - print a leng of a string
*
*@s: variable that have a string
* Return: Always (_strlen_recursion) (success)
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
