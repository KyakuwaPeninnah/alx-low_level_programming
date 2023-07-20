#include "main.h"
#include <stdio.h>

/**
  * print_number -  prints an integer.
  * @n: inputs integer values
  * Return: empty
  */

void print_number(int n)
{
	unsigned int k;

	if (n < 0)
	{
		_putchar('-');
		k = -n;
	}
	else
	{
		k = n;
	}
	if (k >= 10)
	{
		print_number(k / 10);
	}
	_putchar(k % 10 + '0');
}
