#include "holberton.h"
/**
   * print_alphabet - Prints the alphabet, in lowercase, a new line.
    *
      */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		_putchar(c);
	_putchar('\n');
}
