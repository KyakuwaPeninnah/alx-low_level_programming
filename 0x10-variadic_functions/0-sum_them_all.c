#include "variadic_functions.h"
/**
  * sum_them_all -  returns the sum of all its parameters.
  * @n: constant
  * Return: integer
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int j;
	int sum = 0;
	va_list list;

	va_start(list, n);

	if (n == 0)
		return (0);

	for (j = 0; j < n; j++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);
	return (sum);
}
