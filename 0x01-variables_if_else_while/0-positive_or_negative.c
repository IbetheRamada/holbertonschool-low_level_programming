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
	
		srand(time(0));  

		n = rand() - RAND_MAX / 2;  
		if (n > 0)  
			printf("%d is positive\n", n);  
		else if (n < 0)  
			printf("%d is negative\n", n);  
		else  
			printf("%d is zero\n", n);  
		return (0);
}  
