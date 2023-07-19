#include <stdio.h>

/**
  * fibonacci: finds and prints the first 98 Fibonacci numbers
  */
void print_fibonacci_numbers(void) 
{
	int a = 1, b = 2;
	int n = 98;

	printf("%d, %d", a, b);

	for (int i = 2; i < n; i++)
	{
		int next = a + b;

		printf(", %d", next);
		a = b;
		b = next;
	}
	printf("\n");
}
