#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *puts_half - half string
 *
 *@str : string
 *
 *Return: void
*/

void puts_half(char *str)
{
	int i;
	int size = strlen(s);

	if (size % 2 != 0)
	{
		for (i = (size - 1) / 2; i < size; i++)
		{
			putchar(s[i]);
		}
	}
	else
	{
		for (i = size / 2; i < size; i++)
		{
			putchar(s[i]);
		}
	}
	putchar('\n');
}
