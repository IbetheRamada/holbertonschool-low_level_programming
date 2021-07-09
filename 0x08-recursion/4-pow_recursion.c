#include "holberton.h"
/**
*_pow_recursion - 
*
*/
int _pow_recursion(int x, int y)
{
	if(x < 0)
	{
		return (-1);
	}
	else
	{
		return y * _pow_recursion(x * y);
	}
}