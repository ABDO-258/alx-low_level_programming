#include <stdio.h>
#include "main.h"

/**
*get_bit- get a bit from a binary number
*
*@n:decimal int
*@index: location of the bit
*
*Return: bit or -1 
*/

int get_bit(unsigned long int n, unsigned int index)

{
    int mask = 1;
    unsigned long int m, length = 0;

    m = n;
    while (m > 0)
    {
        m >>= 1;
        length++;
    }
    length--;

    if (length > 0)
        mask <<= (length);
    while (mask > 0)
    {
        if (length == index)
        {
          if ((n & mask) == 0)
            return(0);
        else
            return(1);
        }   
    mask >>= 1;
    length--;
    }
    return (-1);
}