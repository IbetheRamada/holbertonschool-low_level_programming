#include <stdio.h>

/**
 * main - Print numbers 0 to 10 without char variable.
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int number;

	number = 48;
	while (number < 58)
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
