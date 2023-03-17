#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Code starts here
 *
 *
 * Return: 0 - Always true
 */
int main(void)
{
	char i = 'z';

	for (; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
