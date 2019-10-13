#include "holberton.h"
#include <stdio.h>

/**
 *_atoi - swap values
 *@s: size
 *Return: pointer
 */

int _atoi(char *s)
{

int pos = 0;
int sign = 1;
int res = 0;
int counting = 0;

while (s[pos] != '\0')
{
if (s[pos] == '-')
{
sign *= -1;
}
if (s[pos] >= 48 && s[pos] <= 57)
{
counting = 1;
if (res != 0)
{
res = (res * 10) + (sign * (s[pos] - 48));
}
else
{
res = sign * (s[pos] - 48);
}
}
else if (counting == 1)
break;
pos++;
}
return (res);
}
