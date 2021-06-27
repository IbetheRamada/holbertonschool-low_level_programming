#include <stdio.h>

/**
 * main - Print numbers 10 to 0 without char variable.
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int number;

	number = 47;
	while (number < 58)
	{
		putchar("%d", number);
		number++;
	}
	putchar("\n");
	return (0);
}
