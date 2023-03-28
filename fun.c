#include "main.h"
/**
 * func - receives the main string and all the necessary parameters to
 * print a formatted string
 * @format: string to be printed
 * @array: array of conver_t structures
 * @args: list of variadic arguments
 * Return: amount of characters printed
 */

int func(const char *format, var_a array[], va_list args)
{
	int i, j, sum = 0;

	for (i = 0; format[i] != '\0';)
	{
		if (format[i] == '%')
		{
			for (j = 0; array[j].c != NULL; j++)
			{
				if (format[i + 1] == array[j].c[0])
				{
					sum += array[j].p(args);
					break;
				}
			}
			if (array[j].c == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					sum += 2;
				} else
				{
					return (-1);
				}
			}
			i += 2;
		} else
		{
			sum += _putchar(format[i]);
			i++;
		}
	}
	return (sum);
}
