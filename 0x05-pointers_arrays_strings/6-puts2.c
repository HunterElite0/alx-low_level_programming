#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *puts2 - reverse string
 *
 *@str : string
 *
 *Return: void
*/

void puts2(char *str)
{
	int i;
	int size = strlen(str) - 1;

	if (size > 0)
	{
		putchar(str[0]);
		for (i = 2; i < size; i += 2)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
