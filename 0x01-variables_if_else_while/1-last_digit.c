#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - assign a number to the variable n each time it is executed
* If the number is greater than 0, it is positive.
* If the number is less than 0, it is negative.
* equal to 0, is zero.
* Return: (0)
*/
int main(void)
{
		int n;
		int lastn;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		lastn = n % 10;
		if (lastn > 5)
			printf("Last digit of %d is %d and is greater than 5 \n", n, lastn);
		else if (lastn == 0)
			printf("Last digit of %d is %d and is zero\n", n, last n);
		else if (lastn < 6 && lastn != 0)
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
		return (0);
}
