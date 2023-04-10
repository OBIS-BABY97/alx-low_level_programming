#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints binary representation of number using bitwise
 * @n: integer parameter
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;
	int i;

	for (i = 31; i >= 0; i--)
	{
		num = n >> i;
		if (num & 1)
			putchar(49);
		else
			putchar(48);
	}
}
