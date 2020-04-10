/*
#include <iostream>
#include <fstream>
#include<cstdlib>
#include <ctime>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	fstream f;
	//Задача 2b

	
		int sum = 0;
		cout <<"Введите 10 элментов массива"<<endl;
		int a[10];
		for (int i = 0; i < 10; i++){
			cin >> a[i];
			}
		f.open("text6.txt", ios::out);
		for (int i = 0; i < 10; i++)
		{
			if (a[i] > 7)
			{
				sum = a[i] + sum;
			}
			f << sum << endl;
		}
		f.close();
		
}
*/