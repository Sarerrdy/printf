#include "main.h"

/**
 * print_int - a function that prints intigers
 * @num: number to print
 * @count: count
 * Return: count + 1
 */

int print_int(long num, int count)
{
	if (num < 0)
	{
		_putchar('-');
		count++;
	num = num * -1;
	}
	if (num / 10)
	{
		count = print_int(num / 10, count);
	}
	_putchar(num % 10 + '0');
	return (count + 1);
}

