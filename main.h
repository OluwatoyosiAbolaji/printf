#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
int _printf(const char *format, ...);
int _putchar (char c);
int print_percent(va_list c);
int print_char(va_list arguments);
int print_string(va_list arguments);
int print_binary(va_list);

/**
 * struct top - structure
 * @c: character
 * @p: pointer
 * Return: 0
 */

struct top
{
	char *c;
	int (*p)(va_list);
};
typedef struct top var_a;


#endif /* main.h */
