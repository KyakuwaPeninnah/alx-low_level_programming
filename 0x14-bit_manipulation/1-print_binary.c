#include "main.h"
/**
 * print_binary_number - print the binary representation of a number
 * @n: the decimal input
 * Return: void
 */
void print_binary_number(unsigned long int n)
{
	if (n == 0)
		return;
	print_binary_number(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - prints the binary number
 * @n: decimal to be converted
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_binary_number(n);
	}
}
