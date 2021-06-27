#include <stdio.h>

/**
 * main - Print numbers 10 to 0 without char variable.
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int number;

	number = -1;
	while (number < 10)
	{
		putchar("%d", number);
		number++;
	}
	putchar("\n");
	return (0);
}
