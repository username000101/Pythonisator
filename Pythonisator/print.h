#ifndef PRINT_H_INCLUDED
#define PRINT_H_INCLUDED
#pragma message("print.h version 0.5.1beta->Compilation completed, enjoy!")
using namespace std;
namespace Pythonisator_print
{
    static void print(string text) // This method displays text to console.
    {
        cout << text;
    }
    static void println(string text) // This method displays text to console and creating a new line.
    {
        cout << text << endl;
    }
}
#endif // PRINT_H_INCLUDED
