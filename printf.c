#include "main.h"
/**
  * _printf - accepts a string and variable number of arguments
  * and prints string in a specific format to standard output
  * @format: The string to be printed
  *
  * Return: The number of characters printed excluding null
  *
 */

int _printf(const char *format, ...)
{
	va_list args;
	int sum = 0;
	var_a array[] = {
	{"c", print_char},
	{"s", print_string},
	{"%", print_percent},
	{NULL, NULL},
	};

	va_start(args, format);
	int i, j;

	for (i = 0; format[i] != '\0';)
	{
		if (format[i] == '%')
		{
			for (j = 0; array[j].c != NULL; j++)
			{
				if (format[i + 1] == array[j].c[0])
				{
					sum += array[j].p(args);
					i += 2;
					break;
				}

			}
		}
		else
		{
			sum += _putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (sum);
}

