#include "function_pointers.h"
/**
 * print_name - Print a name.
 * @name: The name to print.
 * @f: Pointer the funtion.
 * Return: 0;
 */
void print_name(char *name, void (*f)(char *))
{

	if (f == NULL)
		return;
		(*f)(name);

}
