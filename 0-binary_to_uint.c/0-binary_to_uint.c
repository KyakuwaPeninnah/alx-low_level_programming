#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a character pointer to a string
 * Return: the converted decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	size_t k = 0;
	size_t l = 0;
	size_t sum = 0;
	size_t pow = 1;
	int base = 2;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
	{
		return (b[0] - 48);
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
		return (0);
		for (l = len - 1; l > 0; l--)
		pow = pow * base;
		sum = sum + (pow * (b[k] - 48));
		len--;
		pow = 1;
	}
	return (sum);
}
