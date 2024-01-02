#include <iostream>
#include <string.h>
#include <fstream>
#define NOT !
#define AND &&
#define OR ||
using namespace std;
template <typename Obj>
void print(Obj object)
{
	cout << object;
}
template <typename Obj>
void println(Obj object)
{
	cout << object << endl;
}
string open(string filename,string mode,string text ="");
