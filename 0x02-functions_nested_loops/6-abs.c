#include "holberton.h"
/**
  * _abs - absolute value of an integer
  *@n: Check the vaule absolute
  *Return: Vaule data (-n) (n)
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
