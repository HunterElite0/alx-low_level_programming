#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *rev_string - reverse string
 *
 *@s : string
 *
 *Return: void
*/

void rev_string(char *s)
{
	int i;
	int size = strlen(s) - 1;
	char *temp;

	temp = (char *)malloc((size + 1) * sizeof(char *));
	for (i = 0; s[i] != '\0'; i++)
	{
		temp[size - i] = s[i];
	}
	for (i = 0; i < size + 1; i++)
	{
		s[i] = temp[i];
	}
}
