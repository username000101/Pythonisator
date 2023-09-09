#ifndef STR_EQUALS_H_INCLUDED
#define STR_EQUALS_H_INCLUDED
#pragma message("str_equals.h version 0.5.5beta->Compilation completed. Enjoy!")
using namespace std;
namespace Pythonisator_equals
{
    static void equals(string str1, string str2)
    {
        if (str1.compare(str2)) // if str1  == str2: true
        {
            bool equals_result = true; // Save result
            if (equals_result == true) // Check result
            {
                cout << "true" << endl; // displayed result
            }
        } else // if str1 != str2: false
        {
            bool equals_result = false; // Save result
            if (equals_result == false) // Check result
            {
                cout << "false" << endl; // Displayed result
            }
        }
    }
}

#endif // STR_EQUALS_H_INCLUDED
