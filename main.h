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