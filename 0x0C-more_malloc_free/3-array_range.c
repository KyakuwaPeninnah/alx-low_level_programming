#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return:  pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int i, l;
	int *p;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	p = malloc(sizeof(int) * l);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
