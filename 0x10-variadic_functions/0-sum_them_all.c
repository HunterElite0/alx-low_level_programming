#include <stdarg.h>
/**
 * sum_them_all - sums all numbers
 *
 * @n: int
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	va_list v;
	unsigned int i = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(v, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(v, int);
	}
	va_end(v);
	return (result);
}
