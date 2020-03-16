#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * op_add - add a and b
  * @a: value 1
  * @b: value 2
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtract a and b
  * @a: value 1
  * @b: value 2
  * Return: difference
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiply a and b
  * @a: value 1
  * @b: value 2
  * Return: product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divide b from a
  * @a: value 1
  * @b: value 2
  * Return: division
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - a modulo b
  * @a: value 1
  * @b: value 2
  * Return: remainder
  */
int op_mod(int a, int b)
{
	return (a % b);
}
