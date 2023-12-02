#include "3-calc.h"

/**
 * op_add - add the two numbers
 *
 * @a: first argument
 * @b: sescond argument
 *
 * Return: the addition of the two number
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract the two numbers
 *
 * @a: first member
 * @b: second member
 *
 * Return: the subtraction of the two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply the two numbers
 *
 * @a: first member
 * @b: second menber
 *
 * Return: the multiplication of the two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide the two numbers
 *
 * @a: first member
 * @b: second member
 *
 * Return: the division of the two numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the mod of two numbers
 *
 * @a: first member
 * @b: second member
 *
 * Return: the modulus of the two numbers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
