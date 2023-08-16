#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
  * print_name -  prints a name
  * @name: pointer to a name
  * @f: pointer to a character
  * Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	if (name ==  NULL || f == NULL)
		return;
	(*f)(name);
}
