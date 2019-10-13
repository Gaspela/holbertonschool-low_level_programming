#include "holberton.h"
#include <stdio.h>

/**
 *_atoi - Swap values.
 *@s: Size.
 *Return: Pointer.
 */
int _atoi(char *s)
{
	int i = 0, len = 0, num = 0, sign = 1, ok = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (i < len && ok == 0)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + sign * (s[i] - 48);
			if (s[i + 1] >= '0' && s[i + 1] <= '9')
				ok = 0;
			else
				ok = 1;
		}
		i++;
	}
	return (num);
}
