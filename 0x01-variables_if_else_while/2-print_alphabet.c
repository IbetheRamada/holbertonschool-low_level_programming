#include <stdio.h>

/**
 * main - Print the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{  
	char letter=65;
	while (letter < 91)
	{
		letter = letter + 1;
		putchar(letter);
	}
	return (0);
}
