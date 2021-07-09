#include "holberton.h"
#include <stdio.h>
/**
*
*
*
*/
int factorial(int n)
{
	int a = 2;

	if ((a%n) < 0)
	{
		return(-1);	
	}
	else if ((a%n) == 0)
	{
		return(1);
	}
	else if ((a%n) > 0)
	{
		n = n/a;
		return(n);
	}
	a++;
}
