#pragma message("filestream.h version 0.5.5beta->Compilation completed. Enjoy!")
#ifndef FILESTREAM_H_INCLUDED
#define FILESTREAM_H_INCLUDED
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
namespace Pythonisator_filestream
{
    static void read_file(string path, string data) // Method for reading data from a file, call: read_file(filepath, data(a variable into which data from the file will be written))
    {
        ifstream file(path); // Open a stream
        while(getline(file, data)) // Read file and write data to variable
        {
            cout << data << endl; 
        }
    }
        static void write_file(string path, string data) // Method for writing to file data, call: write_file(filepath, data(Data to be written to file))
        {
            ofstream file(path, ofstream::app); // Open a stream
            file << data;
        }

}


#endif // FILESTREAM_H_INCLUDED
