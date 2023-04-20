#include "variadic_functions.h"
/**
 * print_all - sums all numbers
 *
 * @format: types of parameters
 */
void print_all(const char *const format, ...)
{
	va_list v;
	char *string;
	int size = 0, i = 0;

	va_start(v, format);
	while (format[i++] != '\0')
		size++;
	i = 0;
	while (i < size)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(v, int));
			break;
		case 'i':
			printf("%d", va_arg(v, int));
			break;
		case 'f':
			printf("%f", va_arg(v, double));
			break;
		case 's':
			string = va_arg(v, char *);
			if (string == NULL)
				string = "(nil)";
			printf("%s", string);
			break;
		default:
			i++;
			continue;
		}
		if (i != size - 1)
			printf(", ");
		i++;
	}
	va_end(v);
	printf("\n");
}
