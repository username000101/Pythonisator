#pragma once
#include <iostream>
#include <fstream>
#include <string>
// Python logic function
#define inputt getline(cin,
#define input cin>>
#define AND && // Logic operator "and"
#define OR || // Logic operator "or"
#define NOT ! // Logic operator "not"]
// Python logic function is ended

using namespace std; 
namespace Pythonisator
{
    class text_stream
    {
        public:
        static void print(string text)
        {
            cout << text;
        }
        static void println(string text)
        {
            cout << text << endl;
        }
    };
    class filestream
    {
        public:
        static void read_file(string path,string data)
        {
            ifstream file(path, ifstream::app);
            while(getline(file, data))
            {
                cout << data<<endl;
            }
            file.close();
        }
        static void write_file(string path, string data)
        {
            ofstream file(path, ofstream::app);
            file << data;
            file.close();
        }
    };
    class str_equals
    {public:
        static int equal(string str1, string str2)
        {
            
            int equal = str1.compare(str2);
            return equal;
        }
    };

}