#ifndef STR_EQUALS_H_INCLUDED
#define STR_EQUALS_H_INCLUDED
#pragma message("str_equals.h version 0.5.1beta->Compilation completed. Enjoy!")
using namespace std;
namespace Pythonisator_equals
{
    static void equals(string str1, string str2)
    {
        if (str1.compare(str2))
        {
            bool equals_result = true;
            if (equals_result == true)
            {
                cout << "true" << endl;
            }
        } else
        {
            bool equals_result = false;
            if (equals_result == false)
            {
                cout << "false" << endl;
            }
        }
    }
}

#endif // STR_EQUALS_H_INCLUDED
