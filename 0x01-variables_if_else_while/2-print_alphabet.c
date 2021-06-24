#include <stdio.h>

/**
 * main - Print the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{  
	char letter=96;
	while (letter < 122)
	{
		letter = letter + 1;
		putchar(letter);
		putchar('\n')
	}
	return (0);
}
