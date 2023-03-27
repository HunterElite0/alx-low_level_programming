#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *_strcpy - copies string
 *
 *@a : string
 *@n : string
 *
 *Return: string
*/
char *_strcpy(char *a, char *n)
{
	int size = strlen(n);
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			a[i] = n[i];
		}
	}
	return (a);
}
