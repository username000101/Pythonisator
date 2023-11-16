#pragma once
#include <iostream>
#include <algorithm>
int equal(std::string str1, std::string str2)
{
    std::transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    std::transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    if (str1 == str2)
    {
        return EXIT_SUCCESS; // If the strings are equal, then the function returns 0!
    }
    else
    {
        return EXIT_FAILURE; // If the strings are NOT equal, then the function returns any number, but not 0!
    }
}