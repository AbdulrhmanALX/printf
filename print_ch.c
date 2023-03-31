#include "main.h"

/**
 *print_ch - prints a char
 *
 *@ap: variadic int
 *Return: 0 in success
 */

int print_ch(va_list ap)
{
	char ch = va_arg(ap, int);

	write(1, &ch, 1);

	return (0);
}
