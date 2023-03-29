#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *_strncpy - appends strings
 *
 *@src : string
 *@dest : string
 *@n : int
 *
 *Return: char *
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
