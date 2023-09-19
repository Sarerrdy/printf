#include "main.h"
/**
 * d_han - handles decimal digits
 * @param: argument
 * Return: count
 */
int d_hand(va_list param)
{
	int count;
	int val = va_arg(param, int);

	count = print_int(val, 0);

	return (count);
}
/**
 * i_hand - handle intigers
 * @param: argument
 * Return: count
 */
int i_hand(va_list param)
{
	int count;
	int val = va_arg(param, int);

	count = print_int(val, 0);

	return (count);
}
/**
 * c_hand - handles characters
 * @param: argument
 * Return: count
 */
int c_hand(va_list param)
{
	int count;
	char get_char = va_arg(param, int);

	count = _putchar(get_char);
	return (count);
}
/**
 * s_hand - handles strings
 * @param: argument
 * Return: count
 */
int s_hand(va_list param)
{
	int count = 0;
	char *ptr = va_arg(param, char *);

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
