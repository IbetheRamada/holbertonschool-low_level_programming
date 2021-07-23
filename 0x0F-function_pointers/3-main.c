#include "3-calc.h"
/**
 * get_op_func - Return a addition
 * @argc:
 * @argv: a char
 * Return: return a int
 */
 int main (int argc, char *argv[])
{	
	if(argc != 4)
	{
		printf("Error\n");
		exit(98);
	}	
	char *operator = argv[2];
	get_op_func(operator);

	int a = atoi(argv[1]);
	int b = atoi(argv[3]);	

	if (b == 0 && (*argv[2] == '%' || *argv[2] == '/'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(a, b));
	return (0);
}