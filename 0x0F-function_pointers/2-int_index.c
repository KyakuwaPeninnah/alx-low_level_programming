#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array holding int
 * @size: array size
 * @cmp: function pointer
 * Return: an integer value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (!(cmp(array[j]) == 0))
			return (j);
	} return (-1);
}
