#include "main.h"

/**
 * *_memcpy - copies the memory area
 * @dest: pointer to the destination array
 * @src: pointer to the source array
 * @n: number of byte up to which to replace values
 *
 * Return: pointer to the destination array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
