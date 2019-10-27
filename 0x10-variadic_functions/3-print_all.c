#include "variadic_functions.h"
/**
 * funtionprint_c - Print value type char.
 * @c: Va_list.
*/
void funtionprint_c(va_list c)
{

	printf("%c", va_arg(c, int));

}
/**
 * funtionprint_i - Print value type int.
 * @i: Va_list.
*/
void funtionprint_i(va_list i)
{

	printf("%d", va_arg(i, int));

}
/**
 * funtionprint_f - Print value type double.
 * @f: Va_list.
*/
void funtionprint_f(va_list f)
{

	printf("%f", va_arg(f, double));

}
/**
 * funtionprint_s - Print value type char.
 * @s: Va_list.
*/
void funtionprint_s(va_list s)
{

	char *ptr = va_arg(s, char *);

	if (ptr != NULL)
	{
	printf("%s", ptr);
	return;
	}
	printf("(nil)");

}
/**
 * print_all - Prints all, followed by a new line.
 * @format: Seperator of the numbers.
 * Return: Output.
*/
void print_all(const char * const format, ...)
{

	functions array[] = {{"c", funtionprint_c},
	{"i", funtionprint_i},
	{"f", funtionprint_f},
	{"s", funtionprint_s},
	{NULL, NULL}};

	unsigned int i = 0, j = 0;
	void (*fun)(va_list);
	va_list list;
	char *spt = "";

	/*Init va_list*/
	va_start(list, format);
	/*format is a list of types of arguments passed to the function*/
		while (format && format[i])
			{ j = 0;
			while (array[j].s != NULL)
				{
				if (array[j].s[0] == format[i])
					{
					printf("%s", spt);
					fun = array[j].pt;
					fun(list);
					spt = ", ";
					}
				j++;
			}
			i++;
		}
		va_end(list);
		printf("\n");

}

