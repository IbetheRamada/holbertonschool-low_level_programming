#include "holberton.h"
#include <stdio.h>
/**
*main - print a
*@argc: int argument
*@argv: char argument
* Return: Always (0) (success)
*/
int main(int argc, char *argv[])
{
	argv[0] = 0;
	argc--;
	printf("%d\n", argc);
	return (0);
}
