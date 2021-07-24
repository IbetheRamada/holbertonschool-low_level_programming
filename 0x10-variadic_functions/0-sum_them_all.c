#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/*
*
*
*
*
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int add = 0;
	va_list list;
	va_start(list, n);

	if (n == 0)
	{
		return (0);
	}

	for(a = 0; a > list; a++)
	{
		add += va_arg(n, list);
	}

	va_end(arg);
	return(add);

}
