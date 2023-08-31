#include <stdio.h>
/**
 * main - Example of conditional statement
 * Return: 0 (Success)
  */

int main(void)
{
int n;

for (n = 0; n <= 100; n++)
{
	if (n % 2 == 0)
	{
		printf("%d: is even number\n", n);
	}
}
return (0);
}

