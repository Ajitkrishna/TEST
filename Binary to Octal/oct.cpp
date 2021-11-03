#include "pch.h"
#include "oct.h"

int convert::binaryToOctal(int& n)
{
    octal_value = 0;
    num = n;
    decimal_value = 0;
    base = 1;
    temp = num;
    while (temp) 
    {
        int last_digit = temp % 10;
        temp = temp / 10;
        decimal_value += last_digit * base;
        base = base * 2;
    }

    int i = 1;
    while (decimal_value != 0)
    {
        octal_value += (decimal_value % 8) * i;
        decimal_value /= 8;
        i *= 10;
    }
    return octal_value;
}

