#include "main.h"

/**
 * specifier - select a conversion spscifer
 * @string: parameter
 * Return: 0
 */

int (*specifier(char string))(va_list param)
{

	if (string == 'c')
	{
		return (&c_hand);
	}
	else if (string == 'd')
	{
		return (&d_hand);
	}
	else if (string == 'i')
	{
		return (&i_hand);
	}
	else if (string == 's')
	{
		return (&s_hand);
	}
return (0);
}
