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
	int var_4;

	for (var_1 = 48; var_1 <= 57 ; var_1++)
	{
		for (var_2 = 48; var_2 <= 57; var_2++)
		{
			for (var_3 = 48; var_3 <= 57; var_3++)

			{
				for (var_4 = 48; var_4 <= 57; var_4++)

				{
				putchar(var_1);
				putchar(var_2);
				putchar(32);
				putchar(var_3);
				putchar(var_4);
				if (var_1 < 57)
					{
					putchar(44);
					putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
