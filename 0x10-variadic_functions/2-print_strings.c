#include "variadic_functions.h"
/**
 * print_strings - print strings passed to a function
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(list, char *);

		if (p == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
