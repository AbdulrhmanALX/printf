#include "main.h"
/**
  * _printf - produces output according to format
  *
  * @format: the format to be printed
  *
  * Return: the number of characters
  */
int _printf(const char *format, ...)
{
	int i;
	va_list ap;
	int (*f)(va_list);

	va_start(ap, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			f = get_form(format[i]);
			f(ap);
			continue;
		}
		write(1, format + i, 1);
	}
	va_end(ap);
	return (i);

}
