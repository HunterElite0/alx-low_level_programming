#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *_strncat - appends strings
 *
 *@src : string
 *@dest : string
 *@n : int
 *
 *Return: char *
*/
char *_strncat(char *dest, char *src, int n)
{
	int size = strlen(dest);
	int i;

	if (n <= strlen(src))
	{
		for (i = 0; i < n; i++)
		{
			dest[i + size] = src[i];
		}
	}

	return (dest);
}
