#include <stdio.h>
#include <math.h>
#include <unistd.h>

/**
 * itoa - print numbers as characters
 *
 * @ x: the number to be printed
 *
 * Return: nothing
 */ 
void my_itoa(long x)
{
    int i = 0;
    
    if (x < 0)
        {
            x = x * -1;
            char minus = '-';
            write(1, &minus,1);
        }
    int n = (int) log10(x);
    for (i = n; i >= 0; i--)
    {
        if (i == 0)
        {
            char digit_ch = (char) x % 10 + '0';
            write (1, &digit_ch, 1);
        }
        else
        {
            int digit = (x / (long) pow(10, i));
            char digit_ch = (char) digit + '0';
            write (1, &digit_ch, 1);
            x = x - digit * (long) pow(10, i);
        }   
    }
}
