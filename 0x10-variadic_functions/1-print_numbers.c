#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator:  string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	va_list arg;

	va_start(arg, n);
	for (counter = 0; counter < n; counter++)
	{
		printf("%d", va_arg(arg, int));
		if (separator != NULL && counter < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
