#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*
*
*
*/
int main(int argc, char *argv[])
{
	int result;

	if (argc <= 2)
		printf("0\n");

	if (scanf("%d", atoi(argv[1])) == 0)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) + atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}