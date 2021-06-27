#include <stdio.h>

/**
 * main - Print numbers combination of two digit separated by ,
 * and following by space.
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int var_1;
	int var_2;
	int var_3;

	for (var_1 = 48; var_1 <= 55 ; var_1++)
	{
		for (var_2 = var_1 + 1; var_2 <= 56; var_2++)
		{
			for (var_3 = var_2 + 1; var_3 <= 57; var_3++)
			{
			putchar(var_1);
			putchar(var_2);
			putchar(var_3);
			if (var_1 < 55)
			{
			putchar(44);
			putchar(32);
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
