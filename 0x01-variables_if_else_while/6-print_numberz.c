#include <stdio.h>

/**
 * main - Print numbers from 0 to 9 using putchar
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}

