#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - sum of two numbers
 * @a: first num
 * @b: second num
 *
 * Return: sum of two nums
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction of two numbers
 * @a: first num
 * @b: second num
 *
 * Return: difference of two nums
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of two numbers
 * @a: first num
 * @b: second num
 *
 * Return: product of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 * @a: first num
 * @b: second num
 *
 * Return: result of division of two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder after the division of two numbers
 * @a: first num
 * @b: second num
 *
 * Return: remainder of the division of two nums
 */
int op_mod(int a, int b)
{
	return (a % b);
}
