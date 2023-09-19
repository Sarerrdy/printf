#include "main.h"

/**
 * specifier - select a conversion spscifer
 * @str: parameter
 * Return: 0
 */

int (*specifier(char str))(va_list arg)
{

	if (str == 'c')
	{
		return (&c_handler);
	}
	else if (str == 'd')
	{
		return (&d_handler);
	}
	else if (str == 'i')
	{
		return (&i_handler);
	}
	else if (str == 's')
	{
		return (&s_handler);
	}
return (0);
}
