#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - prints prime factor
 *
 *
 * Return: 0 (Always)
*/
int main(void)
{
	long long max = -9999999999;
	long long num = 612852475143;
	int i = 5;

	for (; i <= sqrt(num); i+= 6)
	{
		while (num % i == 0)
		{
			max = i;
			num = num / i;
		}
		while (num % (i+2) == 0)
		{
			max = i + 2;
			num = num / (i + 2);
		}
	}
	printf("%lld\n", max);
	return (0);
}
