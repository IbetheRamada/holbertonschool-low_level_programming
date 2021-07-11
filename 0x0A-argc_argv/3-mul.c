#include "holberton.h"
#include <stdio.h>
/**
*main - print a
*@argc: int argument
*@argv: char argument
* Return: Always (0) (success)
*/
int main(int argc, char **argv)
	{

	 int total;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	total = (int) *argv[1] * (int) *argv[2];

	printf("%d\n", total);

	return (0);

	}