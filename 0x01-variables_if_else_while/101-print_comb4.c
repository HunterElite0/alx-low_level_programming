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
	int i;
	int j;
	int s;

	for (i = 48 ; i <= '9'; i++)
	{
		for (j = i + 1 ; j <= '9'; j++)
		{
			for (s = j + 1 ; s <= '9' ; s++)
			{
				putchar(i);
				putchar(j);
				putchar(s);
				if (i == '7' && j == '8' && s == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
