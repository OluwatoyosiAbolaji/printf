#include "main.h"
/**
  * _putchar - function to print a character
  * @c: character to be printed
  *
  * Return: 1 (On success)
  * On error, -1 is returned, and errno is set appropriately.
  */

int _putchar (char c)
{
	return (write(1, &c, 1));
}
