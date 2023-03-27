#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *_strcpy - copies string
 *
 *@dest : string
 *@src : string
 *
 *Return: string
*/
char *_strcpy(char *dest, char *src)
{
	int i;
	int size;

	i = 0;
	while (src[i] != '\0')
		i++;
	size = i;
	for (i = 0; i <= size; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
