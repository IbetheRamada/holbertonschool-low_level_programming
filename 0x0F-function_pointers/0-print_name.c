#include <stdio.h>
#include "function_pointer.h"
/**
*
*
*
*
*/
void print_name(char *name, void (*f)(char *))
{
	unsigned int i = 0;

	for (i >= 0; name[i] != '\0'; i++)
	{
		printf("%c", name[i]);
		
	}
	putchar(10);
}