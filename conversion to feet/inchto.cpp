#include "pch.h"
#include "inchto.h"

int convertTO::inchToFeet(int& n)
{
    num = n;
    feet = num / 12;
    return feet;
}
