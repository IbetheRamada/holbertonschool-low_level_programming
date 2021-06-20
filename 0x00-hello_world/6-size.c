#include<stdio.h> 

/**
 * main - Print a text
 *
 * Return: Always 0 (sucess) 
 */
int main(void)
{
  char a;
  int b;
  long int c;
  long long int d;
  float e;

  printf("Size of a char: %d byte(s)\n") sizeof(a);
  printf("Size of an init: %d byte(s)\n") sizeof(b); 
  printf("Size of long int: %d byte(s)\n") sizeof(c);
  printf("Size of long long init:%d byte(s)\n") sizeof(d);
  printf("Size of a float: %d byte(s)\n") sizeof(e);
  return (0);
}