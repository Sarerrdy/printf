#include "main.h"

/**
 * _putchar -  writes the character c to stdout
 * @c: the character to print
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return 1;
}
