#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes
 * @a: address to the main function
 * @n: number of bytes
 * Return: void
*/
void print_opcodes(char *a, int n)
{
int k;

for (k = 0; k < n; k++)
{
printf("%.2hhx", a[k]);
if (k < n - 1)
printf(" ");
}
printf("\n");

}

/**
 * main - prints the opcodes
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: always O
 */
int main(int argc, char **argv)
{
int j;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
j = atoi(argv[1]);
if (j < 0)
{
printf("Error\n");
exit(2);
}
print_opcodes((char *)&main, j);
return (0);
}
