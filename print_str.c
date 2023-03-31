#include "main.h"

/**
 *print_str - prints a string
 *
 *@ap: variadic int
 *Return: 0 in success
 */

int print_str(va_list ap)
{
	char *str = va_arg(ap, char *);
	int str_len = strlen(str);

	write(1, str, str_len);

	return (str_len);
}
