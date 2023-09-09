#pragma message("filestream.h version 0.5.5beta->Compilation completed. Enjoy!")
#ifndef FILESTREAM_H_INCLUDED
#define FILESTREAM_H_INCLUDED
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
namespace Pythonisator_filestream
{
    static void read_file(string path, string data)
    {
        ifstream file(path);
        while(getline(file, data))
        {
            cout << data << endl;
        }
    }
        static void write_file(string path, string data)
        {
            ofstream file(path, ofstream::app);
            file << data;
        }

}


#endif // FILESTREAM_H_INCLUDED
