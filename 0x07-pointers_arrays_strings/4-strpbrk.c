#include "main.h"

/**
 * _strpbrk - gets the length of a prefix substring
 * @s: pointer to the string
 * @accept: pointer to string to be checked
 *
 * Return: pointer to the start of the character
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (accept[j])
return (s + i);
}
return (0);
}
