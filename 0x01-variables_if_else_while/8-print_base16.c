#include <stdio.h>

/**
 * main - Print numbers of base 16
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}

	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}

	putchar('\n');
	return (0);
}
