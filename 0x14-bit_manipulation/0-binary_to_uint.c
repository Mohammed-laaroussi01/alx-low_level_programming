#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
    int i = 1;
    int result = 0;

    while (b[i] != '\0')
    {
        if (b[i] != '0' && b[i] != '1')
        {
            return 0;
        }
        i++;
    }
    for (int j = i - 1 ; j >= 0; j--)
    {
        result = result + (b[i - j ] - '0') * (1 << j);
    }

    return result;
}
