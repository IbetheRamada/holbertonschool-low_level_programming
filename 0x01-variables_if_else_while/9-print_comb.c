#include <stdio.h>

/**
 * main - Print numbers separated by , and following by space.
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		putchar(number);
		if (number < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
