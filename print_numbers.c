#include "main.h"

/**
 * print_number - print decimal numbers in base ten
 * @a: variable names
 * Return: 0
 */

int print_number(va_list a)
{
	unsigned int i, j, countnum, count;
	int n;

	count = 0;
	n = va_arg(a, int);
		if (n < 0)
		{
			i = (n * -1);
			count += _putchar('-');
		}
		else
			i = n;

	j = i;
	countnum = 1;
	while (j > 9)
	{
		j /= 10;
		countnum *= 10;
	}
	while (countnum >= 1)
	{
		count += _putchar(((i / countnum) % 10) + '0');
		countnum /= 10;
	}
	return (count);
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
