#include "main.h"

/**
 * get_form - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @c: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * f_a[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then the approriate
 * printing function
 * Return: a pointer to the matching printing function
 */

int (*get_form(char c))(va_list)
{
	int flag = 4;
	int i;

	form f_a[] = {
		{'c', print_ch},
		{'s', print_str},
		{'i', print_int},
		{'d', print_int}
		 };

	for (i = 0; i < flag; i++)
	{
		if (f_a[i].spec == c)
			return (f_a[i].fp);
	}

	return (NULL);
}
