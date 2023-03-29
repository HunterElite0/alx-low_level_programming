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
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i + size] = src[i];
		i++;
	}

	return (dest);
}
