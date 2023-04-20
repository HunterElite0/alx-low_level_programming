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
	unsigned int i = 0;

	va_start(v, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(v, int));
		if (separator != NULL)
		{
			if (i != (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	va_end(v);
	printf("\n");
}
