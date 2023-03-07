#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: pointer to the string
 * @c: character whose first occurence is to be returned
 *
 * Return: pointer to the string or NULL
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i]; i++)
{
if (s[i] == c)
return (s + i);
}
return (0);
}
