#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include "main.h"

/**
 * itoa - print numbers as characters
 *
 * @ x: the number to be printed
 *
 * Return: nothing
 */ 
void my_itoa(long x)
{
    char minus;
    int i;
    char digit_ch;
    int digit;
    int n;

    if (x < 0)
        {
            x = x * -1;
	    minus = '-';
            write(1, &minus,1);
        }
    n = (int) log10(x);
    for (i = n; i >= 0; i--)
    {
        if (i == 0)
        {
            digit_ch = (char) x % 10 + '0';
            write (1, &digit_ch, 1);
        }
        else
        {
            digit = (x / (long) pow(10, i));
            digit_ch = (char) digit + '0';
            write (1, &digit_ch, 1);
            x = x - digit * (long) pow(10, i);
        }   
    }
}
