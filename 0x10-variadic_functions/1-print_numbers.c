#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - sums all numbers
 *
 * @separator: char *
 * @n: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list v;
	int i = 0;

	if (n == 0)
	{
		return;
	}

	va_start(v, n);
	for (i = 0; i < (int)n; i++)
	{
		printf("%d", va_arg(v, int));
		if (separator != NULL)
		{
			if (i != ((int)n - 1))
			{
				printf("%s", separator);
			}
		}
		else
			printf(" ");
	}
	putchar('\n');
	va_end(v);
}
