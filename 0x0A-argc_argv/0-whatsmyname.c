#include "holberton.h"
#include <stdio.h>
/**
*main - print a name of the file
*@argc: A int argument
*@argv: A char argument
*Return: (0) always (success)
*/
int main(int argc, char *argv[])
{
	int a = 0;

	while (a < argc)
	{
		printf("%s\n", argv[a]);
		break;
	}
	return (0);
}
