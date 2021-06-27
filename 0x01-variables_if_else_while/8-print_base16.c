#include <stdio.h>

/**
 * main - Print alphabet in reverse.
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int car;

	car = 48;
	while (car < 103)
	{
		if (car == 58)
		car = 97;
		putchar(car);
		car++;
	}
	putchar('\n')
	return (0);
}

