/**
 * sum_them_all - sums all numbers
 *
 * @n: int
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	int result = 0;
	va_list v;
	int i = 0;

	va_start(v, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(v, int);
	}
	va_end(v);
	return (result);
}
