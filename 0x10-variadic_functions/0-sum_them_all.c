#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Return sum of all parameters.
 * @n: Value int numbers.
 * Return: sum.
*/
int sum_them_all(const unsigned int n, ...)
{

	int sum = 0;
	va_list args;
	unsigned int i;
/*If n == 0, return 0*/
	if (n == 0)
		return (0);
/*Initialize valist for num number of arguments*/
	va_start(args, n);
/*Access all the arguments assigned to valist*/
	for (i = 0; i < n; i++)

		sum += va_arg(args, int);
/*Clean memory reserved for valist*/
	
	va_end(args);
	return (sum);

}
