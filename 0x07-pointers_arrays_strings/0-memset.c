#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the array in memory
 * @b: character to replace the value with
 * @n: number of byte up to which to replace values
 *
 * Return: pointer to the array
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
