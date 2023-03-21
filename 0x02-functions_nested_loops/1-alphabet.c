#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int i;
	for (i = 97; i < 'z'; i++)
	{
		_putchar(i);
	}
}
int main(void)
{
	print_alphabet();
	return (0);
}
