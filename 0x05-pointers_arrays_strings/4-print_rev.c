#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
*print_rev: print in reverse one string
*@s: variable of string
* Return: Always (p) (Success)
*/
void print_rev(char *s)
{
	int tam = 1;
    int cont1 = 0;
    
    while(tam > 0){
        if (s[cont1] == '\0')
            break;
        cont1 ++;
        
    }

	 int a = cont1;
    
    char *p[sizeof(a)];
    int y = 0;
    int r = 0;
    

    for (y = (a - 1); y >= 0; y--)
    {
        p[r] = &s[y];
        printf("%c", *p[r]);
        r ++;
        
    }
	
	
	return;
	
	
}
