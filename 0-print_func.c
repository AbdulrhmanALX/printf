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
	int str_len = 0;
	va_list ap;

	va_start(ap, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					{
						char ch = va_arg(ap, int);
						char *c = &ch;

						write(1, c, 1);
						break;
					}

				case 's':
					{
						char *str = va_arg(ap, char *);

						str_len = strlen(str);
						write(1, str, str_len);
						break;
					}
				case 'd':
					{
						int dec = va_arg(ap, int);
						my_itoa(dec);
						break;
					}
				case 'i':
					{
						int dec = va_arg(ap, int);
						my_itoa(dec);
						break;
					}
			}
			continue;
		}
		write(1, format + i, 1);
	}
	va_end(ap);
	return (str_len + i);
}
