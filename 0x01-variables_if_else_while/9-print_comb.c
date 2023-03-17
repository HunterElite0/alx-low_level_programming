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
	int i = 48;

	for (; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
