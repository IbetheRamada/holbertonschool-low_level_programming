#include <stdio.h>
/**
*
*
*/
int main(void)
{
	int a;
	int b;

	for(a = 48; a <= 57; a++)
	{
		for(b = a + 1; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
			if (b <= 57)
			{
				putchar(44);
				putchar(32);
			}
		}	
	}

}