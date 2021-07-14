#include <stdio.h>
/**
*
*
*
*/
int main(void)
{
	char letter;

	for (letter = 122; letter > 96; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}