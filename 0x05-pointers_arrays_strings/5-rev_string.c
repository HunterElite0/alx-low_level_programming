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
	int size = strlen(s);

	for (i = size - 1; s[i] != '\0'; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
