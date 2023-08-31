#include "main.h"
/**
 * flip_bits - returns the number of bits
 * you would need to flip to get from one number to another
 * @n: first number to compare
 * @m: second number to compare
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int i;

	result = n ^ m;
	for (i = 0; result > 0;)
	{
		if ((result & 1) == 1)
			i++;
		result = result >> 1;
	}
	return (i);
}
