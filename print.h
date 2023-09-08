#pragma once
#include <iostream>
#include <string>
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