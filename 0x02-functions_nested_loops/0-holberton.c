#include "holberton.h"

/**
*main - assign a number to the variable n each time it is executed
* If the number is greater than 0, it is positive.
* If the number is less than 0, it is negative.
* equal to 0, is zero.
* Return: (0)
*/

int main(void)
{
	char var[] = "Holberton";
	int var_1;

	var_1 = 0;
	while (var_1 <= 8)
	{
		_putchar(var[var_1]);
		var_1++;
	}
	_putchar('\n');
	return (0);
}
