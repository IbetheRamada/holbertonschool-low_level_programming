#include "holberton.h"
#include <stdio.h>
/**
*
*
*
*/
int main(int argc, char *argv[])
{
	int a = 0;
	while (a < argc)
	{
		printf(" %s\n", argv[a]);
		break;
	}
	return (0);
}