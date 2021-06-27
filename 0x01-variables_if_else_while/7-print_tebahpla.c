#include <stdio.h>

/**
 * main - Print alphabet in reverse.
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	char letter;

	for (letter = 122; letter > 96; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
