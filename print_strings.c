#include "main.h"


/**
 * print_char - print characters
 * @arguments: functions
 *
 * Return: 0
 */

int print_char(va_list arguments)
{
	char variable = va_arg(arguments, int);

	_putchar(variable);
	return (1);
}

/**
 * print_string - print string
 * @arguments: functions
 *
 * Return: 0
 */

int print_string(va_list arguments)
{
	int i, len = 0;

	char *str;

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
		len +=  _putchar(str[i]);
	return (len);
}

/**
 * print_percent - print string
 * @c: functions
 *
 * Return: 0
 */

int print_percent(va_list a)
{
	int percent = va_arg(a, int);
	percent = 37;
	_putchar (percent);
	return (1);
}

