#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
*str_concat - function that concatenates two strings
*@s1: char of a string
*@s2: char of other string
*Return: Always (ptr) (success)
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, i2, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	i2 = 0;
	while (s2[i2] != '\0')
		i2++;

	ptr = malloc(sizeof(char) * i + i2 + 1);
	if (ptr == NULL)
		return (NULL);
	j = 0;
	while (s1[j] != '\0')
	{
		ptr[j] = s1[j];
		j++;
	}

	k = 0;
	while (s2[k] != '\0')
	{
		ptr[j] = s2[k];
		j++;
		k++;
	}
	ptr[j] = '\0';
	return (ptr);
}
