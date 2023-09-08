#pragma once
#include <string>
#include <iostream>
#include"print.h"
using namespace std;
using namespace Pythonisator_print;
namespace Pythonisator_web
{
	static void webPage(string URL)
	{
		string Result = "start www." + URL;
		system(Result.c_str());
	}
	static void webQuery(string query)
	{
		try
		{
			string result = "start www.google.com/search?q=";
			query.replace(query.find(' '), query.length(), "+");
			string URLResult = "start www.google.com/search?q=" + query;
			print("!!! Warning! Use no more one words !!!");
			system(URLResult.c_str());
		}
		catch (exception exc)
		{
			print("ERROR! Begining is ended.");
		}
		
	}
}