#include "function_pointers.h"
#include <stdio.h>
/**
  * array_iterator -  executes a function
  * @size: size of the array
  * @action: a pointer to the function you need to use
  * @array: array pointer
  * Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;

	for (k = 0; k < size; k++)
	{
		action(*array);
		array++;
	}
}
