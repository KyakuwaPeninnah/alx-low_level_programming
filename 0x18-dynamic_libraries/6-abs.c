#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  * @i: Input number as an integer
  * Return: Absolute number
  */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}

