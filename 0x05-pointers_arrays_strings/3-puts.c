#include <stdlib.h>
#include <stdio.h>

/**
 *_puts - len of char array
 *
 *@str : string
 *
 *Return: void
*/

void _puts(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
}
