#include "holberton.h"

/**
 * _atoi - string to integer converter.
 * @s: string char type
 * Return: int
 */

int _atoi(char *s)
{
int sign = 1, resp = 0, fNum;

for (fNum = 0; !(s[fNum] >= 48 && s[fNum] <= 57); fNum++)
{
if (s[fNum] == '-')
{
sign *= -1;
}
}

for (int i = fNum; s[i] >= 48 && s[i] <= 57; i++)
{
resp *= 10;
resp += (s[i] - 48);
}

return (sign * resp);
}
