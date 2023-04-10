#include <stdlib.h>
#include <stdio.h>

/**
 *_strlen - len of char array
 *
 *@s : string
 *
 *Return: int size
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
