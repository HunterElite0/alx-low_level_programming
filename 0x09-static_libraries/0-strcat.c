#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *_strcat - appends strings
 *
 *@src : string
 *@dest : string
 *
 *Return: char *
*/
char *_strcat(char *dest, char *src)
{
	int size = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + size] = src[i];
	}

	return (dest);
}
