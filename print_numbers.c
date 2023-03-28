#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * print_numbers - print decimal numbers in base ten
 * @a: variable names
 * Return: 0
 */

int print_numbers(va_list a)
{
	int i, n, j;
	int len;
	int *number;

	number = malloc(sizeof(int) * 100);
	if (number == NULL)
	{
		return (0);
	}

	n = va_arg(a, int);
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		n = -n;
	}

	i = 0;
	while (n != 0)
	{
		number[i] = n % 10;
		n = n / 10;
		i++;
	}
	for (j = i - i; j >= 0; j--)
	{
		len += _putchar(number[j] + '0');
	}
	free(number);
	return (len);
}

