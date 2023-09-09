#pragma message("str_equals.h version 0.5.5beta->Compilation completed. Enjoy!")
#ifndef STR_EQUALS_H_INCLUDED
#define STR_EQUALS_H_INCLUDED
using namespace std;
namespace Pythonisator_equals
{
    static void equals(string str1, string str2) // The method compares strings ignoring case.
    {
        if (str1.compare(str2))
        {
            bool equals_result = true;
            if (equals_result == true)
            {
                cout << "true" << endl; // if condition = true - method print("true")
            }
        } else
        {
            bool equals_result = false;
            if (equals_result == false)
            {
                cout << "false" << endl; // if condition = false - method print("false")
            }
        }
    }
}

#endif // STR_EQUALS_H_INCLUDED
