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
	char i = 'a';

	for (; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
