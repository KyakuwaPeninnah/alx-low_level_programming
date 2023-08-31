#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer
 * @index: position to change bit to 0
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	bit = 1;
	bit = bit << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = bit ^ *n;

	return (1);
}
