#include "main.h"

/**
* _printf - a function that produces output according to a format
* @format: list of types of arguments passed to the function
* Return: count
*/

int _printf(const char *format, ...)
{
	int i;
	va_list args;
	int ncount;

	ncount = 0;
	va_start(args, format);

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
		ncount += specifier(format[i])(args);
		}
	else
	{
	ncount += _putchar('%');
		/*ncount += _putchar(format[i]);*/
	continue;
	}
	}
	else
	{
	ncount += _putchar(format[i]);
	}
	}

return (ncount);
}
