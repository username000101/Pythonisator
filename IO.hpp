<<<<<<< HEAD
#include <iostream>
#include <string>
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
int equal(string str1, string str2)
{
	if (int equals = _stricmp(str1.c_str(), str2.c_str()) == 0)
	{
		return EXIT_SUCCESS;
	}
	else
	{
		return EXIT_FAILURE;
	}
}
int inputi()
{
	int TemporaryBuffer;
	cin >> TemporaryBuffer;
	return TemporaryBuffer;
}

double inputd()
{
	double TemporaryBuffer;
	cin >> TemporaryBuffer;
	return TemporaryBuffer;
}

float inputf()
{
	float TemporaryBuffer;
	cin >> TemporaryBuffer;
	return TemporaryBuffer;
}

char inputc()
{
		char TemporaryBuffer;
		cin >> TemporaryBuffer;
		return TemporaryBuffer;
}

string input()
{
	string TemporaryBuffer;
	getline(cin, TemporaryBuffer);
	return TemporaryBuffer;
}
=======
//
// Created by user on 02.01.24.
//
#ifndef IO_HPP
#define IO_HPP
#include <iostream>
#include <vector>
#include <fstream>
#include <variant>
#include <string.h>
using namespace std;
template<typename T>
void print(T _obj);
template<typename T>
void println(T _obj);
string open(string filename,string mode,string text = "");
#endif //IO_HPP
>>>>>>> 9168802 (Уже как традиция какая-то.. Периодически возвращаться с Pythonisator. Переписал с нуля, вроде работает нормально.)
