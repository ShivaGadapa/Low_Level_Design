// apple.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

void Func2()
{
	for (int i = 0; i < 10000000; i++)
	{
		string *strObj;
		strObj = (string *)malloc(sizeof(string));
		Sleep(0.1);
	}
}

void Func1()
{
	Func2();
}

int main()
{
	try {

		Func1();
	}
	catch (...)
	{
		cout << "Exception ="  << endl;
	}
    return 0;
}

