#include<stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %lu byte(s)\n", (unsined long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsined long)sizeof(b));
printf("Size of a long int: %lu bytes(s)\n", (unsined long)sizeof(c));
printf("Size of a long long int: %lu bytes(s)\ni", (unsined long)sizeof(d));
printf("Size of a float: %lu bytes(s)\n", (unsined long)sizeof(f));
return (0);
}
