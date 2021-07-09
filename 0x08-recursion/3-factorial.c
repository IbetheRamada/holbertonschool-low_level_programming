#include "holberton.h"
#include <stdio.h>
/**
* factorial - calculate the factorial of a number
*
*@n: numbers we have to factorize
*  Return: Always (factorial) (success)
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));

}
