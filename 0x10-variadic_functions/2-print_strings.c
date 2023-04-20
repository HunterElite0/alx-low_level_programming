#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - sums all numbers
 *
 * @separator: char *
 * @n: int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list v;
	char *string;
	unsigned int i = 0;

	va_start(v, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(v, char *);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else if (separator != NULL && i != n - 1)
		{
			printf("%s%s", string, separator);
		}
		else
		{
			printf("%s", string);
		}
	}
	va_end(v);
	printf("\n");
}
