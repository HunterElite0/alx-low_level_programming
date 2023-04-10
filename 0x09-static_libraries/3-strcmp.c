#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *_strcmp - copies strings
 *
 *@s1 : string
 *@s2 : string
 *
 *Return: char *
*/
int _strcmp(char *s1, char *s2)
{
	int result = 0;
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		result = s1[i] - s2[i];
		if (result != 0)
			break;
	}
	return (result);
}
