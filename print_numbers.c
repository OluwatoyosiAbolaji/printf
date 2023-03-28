#include "main.h"

/**
 * print_number - print decimal numbers in base ten
 * @a: variable names
 * Return: 0
 */

int print_number(va_list a)
{
	int i, n, j = 0;
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

/**
  * print_binary - prints an integer in binary form
  * @a: the buffer from which the integer will be printed
  *
  * Return: the length of characters
  */
int print_binary(va_list a)
{
	int num = va_arg(a, int);
	int i = 0, j, length = 0;
	int *binary = malloc(sizeof(int) * 200);

	if (binary == NULL)
		return (0);
	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		length += _putchar(binary[j] + '0');
	}
	free(binary);
	return (length);
}
