
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* print_name - function what will print a name
*@name: a char what guard a name
*@f: a void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		(f)(name);
	}
	else
	{

	}
}
