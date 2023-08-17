#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: constant argument
 * Return: any argument
 */
void print_all(const char * const format, ...)
{
	int i, check_stat;
	char *ptr;
	va_list arg;

	va_start(arg, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(arg, int));
				check_stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				check_stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(arg, int));
				check_stat = 0;
				break;
			case 's':
				ptr = va_arg(arg, char *);
				if (ptr == NULL)
					ptr = "(nil)";
				printf("%s", ptr);
				check_stat = 0;
				break;
			default:
				check_stat = 1;
				break;
		}
		if (format[i +  1] != '\0' && check_stat == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arg);
}
