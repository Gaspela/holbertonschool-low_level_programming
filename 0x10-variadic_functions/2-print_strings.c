#include "variadic_functions.h"
/**
 * print_strings - Prints numbers, followed by a new line.
 * @separator: Seperator of the numbers.
 * @n: Number of parameters.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	char *ptr;
	va_list list;

/*Initialize valist for num number of arguments*/
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
	/*Access all the arguments assigned to valist*/
		ptr = va_arg(list, char *);
		if (ptr)

		/*Print arguments assigned to valist for v_arg*/
			printf("%s", ptr);
		else
			printf("(nil)");
			if (i < (n - 1) && separator)
				printf("%s", separator);
		}
		printf("\n");
		va_end(list);

}
