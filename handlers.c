#include "main.h"
/**
 * d_handler - handles decimal digits
 * @arg: argument
 * Return: count
 */
int d_handler(va_list arg)
{
	int count;
	int val = va_arg(arg, int);

	count = print_int(val, 0);

	return (count);
}
/**
 * i_handler - handle intigers
 * @arg: argument
 * Return: count
 */
int i_handler(va_list arg)
{
	int count;
	int val = va_arg(arg, int);

	count = print_int(val, 0);

	return (count);
}
/**
 * c_handler - handles characters
 * @arg: argument
 * Return: count
 */
int c_handler(va_list arg)
{
	int count;
	char get_char = va_arg(arg, int);

	count = _putchar(get_char);
	return (count);
}
/**
 * s_handler - handles strings
 * @arg: argument
 * Return: count
 */
int s_handler(va_list arg)
{
	int count = 0;
	char *ptr = va_arg(arg, char *);

	if (ptr == NULL)
	{
		ptr = "(null)";
	}
	while (*ptr)
	{
	count += _putchar(*ptr);
	ptr++;
	}

	return (count);
}
