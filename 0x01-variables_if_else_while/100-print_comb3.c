#include <stdio.h>

/**
 * main - A function that prints a combination of two numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		j = i + 1;

		while (j <= '9')
		{
			putchar(i);
			putchar(j);

			if (!(i == '8' && j == '9'))
			{
				putchar(',');
				putchar(' ');
			}

			j++;
		}

		i++;
	}

	putchar('\n');

	return (0);
}
