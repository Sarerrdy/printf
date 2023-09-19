#include "main.h"

/**
 * print_int - a function that prints intigers
 * @digit: number to print
 * @counter: count
 * Return: counter + 1
 */

int print_int(long digit, int counter)
{
	if (digit < 0)
	{
		_putchar('-');
		counter++;
	digit = digit * -1;
	}
	if (digit / 10)
	{
		counter = print_int(digit / 10, counter);
	}
	_putchar(digit % 10 + '0');
	return (counter + 1);
}

