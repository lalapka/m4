//Main.cpp:
#include <iostream> //for std::cout
#include <string.h> //for std::string
#include "MD5.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <fstream>
#include <string>
#include <thread>
#include <map>
#include <functional>
#include <stdio.h>
#include <windows.h>
#include <chrono>
#define _CRT_SECURE_NO_WARNINGS
#include <dos.h>
# include <conio.h>
using namespace std;
using std::cout; using std::endl;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "RUS");
	int n = 0;

	cout << "1 - хэш" << endl;
	while (true)
	{
		if (_kbhit()) // слушатель нажатия на клаваутуру
		{
			switch (_getch()) // ждёт нажатия на клавишу
			{
			case 49: // "1"
			{
				cout << endl << "начато хеширование" << endl;
				std::ifstream F;
				F.open("text.txt", ios::out);
				std::string Temp;
				if (F.is_open())
				{
					getline(F, Temp);
				}
				F.close();
				ofstream f;
				f.open("code.txt", ios::out, ios::binary);
				std::string emp = md5(Temp);
				f << emp.c_str();
				f.close();
				cout << "текст хеширован" << endl;

			}
			break;
			}
		}
	}
	return 0;
	system("Pause");
}
