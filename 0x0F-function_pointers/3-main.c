#include "3-calc.h"
/**
 * main - Print a result of a operation
 * @argc: a int
 * @argv: a char
 * Return: Always (0) (success)
 */
int main(int argc, char *argv[])
{
	char *operator = argv[2];

	int a = atoi(argv[1]);
	int b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}



	if (*argv[2] != '\0')
	{
		printf("Error\n");
		exit(98);
	}

	if (b == 0 && (*argv[2] == '%' || *argv[2] == '/'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(a, b));
	return (0);
}
