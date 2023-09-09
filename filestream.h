#pragma message("filestream.h version 0.5.5beta->Compilation completed. Enjoy!")
#ifndef FILESTREAM_H_INCLUDED
#define FILESTREAM_H_INCLUDED
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
namespace Pythonisator_filestream
{
    static void read_file(string path, string data) // Метод, который принимает переменную типа string как путь до файла, и переменную типа string куда записывать данные из файла.
    {
        ifstream file(path); // Открытие потока(знаю, забыл закрыть его, в скором фиксе исправлю.
        while(getline(file, data)) // Чтение данных из файла и запись их в переменную.
        {
            cout << data << endl; // Вывод данных.
        }
    }
        static void write_file(string path, string data) //  Метод, который работает достаточно похоже.
        {
            ofstream file(path, ofstream::app); // Открытие потока
            file << data; // Запись данных, которые вы передали.
        }

}


#endif // FILESTREAM_H_INCLUDED
