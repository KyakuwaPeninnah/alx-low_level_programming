#include "main.h"
/**
 * set_bit - set the bit of a number to 1 at a given index
 * @n: pointer to the bit
 * @index: position of the bit
 * Return: 1 on success and -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	bit = 1;
	bit = bit << index;
	*n = ((*n) | bit);
	return (1);
}
