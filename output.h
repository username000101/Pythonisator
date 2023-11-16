#pragma once
#include <iostream>
#include <any>
template <typename object>
void print(object data)
{
    std::cout << data;
}
template <typename object>
void println(object data)
{
    std::cout << data << std::endl;
}