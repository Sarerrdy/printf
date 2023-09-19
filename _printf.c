#include "main.h"

/**
* _printf - a function that produces output according to a format
* @format: list of types of arguments passed to the function
* Return: count
*/

int _printf(const char *format, ...)
{
	int i;
	va_list arg;
	int numcount;

	numcount = 0;
	va_start(arg, format);

	if (format == NULL)
	{
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
	{
		i++;
		if (format[i] == 'c' || format[i] == 's' || format[i] == 'd'
		|| format[i] == 'i')
		{
		numcount += specifier(format[i])(arg);
		}
	else
	{
	numcount += _putchar('%');
		/*nucount += _putchar(format[i]);*/
	continue;
	}
	}
	else
	{
	numcount += _putchar(format[i]);
	}
	}

return (numcount);
}
