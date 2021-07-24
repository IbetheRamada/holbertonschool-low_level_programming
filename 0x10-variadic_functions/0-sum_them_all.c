#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*sum_them_all - function that return a addition.
*@n: a unsigned int
*Return: Always (0) (success)
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int add = 0, number;

	va_list list;

	va_start(list, n);

	if (n == 0)
	{
		return (0);
	}

	for (a = 0; a < n; a++)
	{
		number = va_arg(list, int);
		add = add + number;
	}

	va_end(list);
	return (add);
}
