#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - print a
*@argc: int argument
*@argv: char argument
* Return: Always (0) (success)
*/
int main(int argc, char **argv)
	{

	 int total;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	
	total =  atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", total);

	return (0);

	}
