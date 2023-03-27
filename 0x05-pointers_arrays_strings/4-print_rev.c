#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *print_rev - reverse string
 *
 *@s : string
 *
 *Return: void
*/

void print_rev(char *s)
{
	int i;
	int size = _strlen(s);

	for (i = size-1; s[i] != '\0'; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
