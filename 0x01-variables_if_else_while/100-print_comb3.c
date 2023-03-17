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
	int s = 49;
	int j = 0;

	for (; i <= '9'; i++)
	{
		for (j = s++; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
				continue;
			putchar(',');
			putchar(' ');
		} 
	}
	putchar('\n');
	return (0);
}
