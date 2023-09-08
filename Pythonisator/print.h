#ifndef PRINT_H_INCLUDED
#define PRINT_H_INCLUDED
#pragma message("print.h version 0.5(beta). How it works? I don't know")
using namespace std;
namespace Pythonisator_print
{
    static void print(string text)
    {
        cout << text;
    }
    static void println(string text)
    {
        cout << text << endl;
    }
}
#endif // PRINT_H_INCLUDED
