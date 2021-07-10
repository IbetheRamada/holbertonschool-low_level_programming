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
	int a = 0;

	while (a <= (argc - 1))
	{	
		if (*argv[a] != '\0')
		{
		printf("%s\n", argv[a]);
		a++;	
		}
		else
			break;
	}	
	return (0);
}