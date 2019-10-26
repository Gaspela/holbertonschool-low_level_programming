#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: Seperator of the numbers.
 * @n: Number of parameters.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list list;
/*Initialize valist for num number of arguments*/
	va_start(list, n);
/*Access all the arguments assigned to valist*/
	for (i = 0; i < n; i++)
	{/*Print arguments assigned to valist for v_arg*/
		printf("%d", va_arg(list, int));
		/*If separator is NULL, dont print it*/
		if (separator && (i < n - 1))

			printf("%s", separator);

	}

	printf("\n");
	va_end(list);

}
