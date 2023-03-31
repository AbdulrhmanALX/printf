#include "main.h"

/**
  *print_int - prints an int
  *
  *@ap: variadic int
  *Return: 0 in success
  */
int print_int(va_list ap)
{
	long dec = va_arg(ap, int);

	my_itoa(dec);

	return (0);
}
