#ifndef PRINT_H_INCLUDED
#define PRINT_H_INCLUDED
#pragma message("print.h версия 0.5.1beta->Компиляция прошла успешно, удачи!")
using namespace std;
namespace Pythonisator_print
{
    static void print(string text) // Этот метод выводит текст в консоли(cout)
    {
        cout << text;
    }
    static void println(string text) // Этот метод тоже выводит текст, но в конце меняет строку на новую(endl \ \n)
    {
        cout << text << endl;
    }
}
#endif // PRINT_H_INCLUDED