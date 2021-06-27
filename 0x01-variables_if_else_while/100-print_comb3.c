#include <stdio.h>

/**
 * main - Print numbers combination of two digit separated by ,
 * and following by space.
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int char_1;
	int char_2;

	for (char_1 = 48; char_1 <= 56 ; char_1++)
	{
		for (char_2 = char_1 + 1; char_2 <= 57; char_2++)
		{
			putchar(char_1);
			putchar(char_2);
			if (char_1 < 56)
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
