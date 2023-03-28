#include "main.h"
/**
  * _printf - accepts a string and variable number of arguments
  * and prints string in a specific format to standard output
  * @format: The string to be printed
  * Return: The number of characters printed excluding null
  *
 */

int _printf(const char *format, ...)
{
	int total = 0;
	va_list args;
	var_a array[] = {
	{"c", print_char},
	{"s", print_string},
	{"%", print_percent},
	{"d", print_integer},
	{"i", print_integer},
	{"b", print_binary},
	{NULL, NULL}
	};
	if (format == NULL)
		return (-1);
	va_start(args, format);
	total = func(format, array, args);
	va_end(args);
	return (total);
}

