#include "main.h"

/**
  * is_lower - checks for lowercase character
  * @c: The character in ASCII code
  * Return: 1 for lowercase charater. 0 for the rest
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

