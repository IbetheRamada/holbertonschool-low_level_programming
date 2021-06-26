#include <stdio.h>

/**
 * main - Print numbers 10 to 0
 *
 * Return: Always (0) (Success)
 */

int main(void)
{
	char number = 47;

	while (number < 57)
	{
		number = number + 1;
		putchar(number);
	}
	putchar('\n');
	return (0);
}
