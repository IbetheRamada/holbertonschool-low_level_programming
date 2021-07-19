#include "holberton.h"
/**
*_isupper - function that return a
*
*@c: a int that have a number in ascii
*
*
*/
int _isupper(int c)
{
	if (c < 91 && c > 64)
	{
		return (1);
	}
	if (c < 121 && c > 96)
	{
		return (0);
	}
}