#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 *string_toupper - uppercase
 *
 *@a : string
 *
 *Return: string
*/
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		a[i] = toupper(a[i]);
	}
	return (a);
}
