#pragma once
#include <iostream>
int inputint()
{
    int tempBuffer;
    std::cin >> tempBuffer;
    return tempBuffer;
}

std::string inputstr()
{
    std::string TempBuffer;
    getline(std::cin, TempBuffer);
    return TempBuffer;
}

char inputch()
{
    char TempBuffer;
    std::cin >> TempBuffer;
    return TempBuffer;
}

long long inputlongl()
{
    long long TempBuffer;
    std::cin >> TempBuffer;
    return TempBuffer;
}

long inputlong()
{
    long TempBuffer;
    std::cin >> TempBuffer;
    return TempBuffer;
}