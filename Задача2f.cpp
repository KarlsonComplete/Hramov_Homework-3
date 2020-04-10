/*#include <iostream>
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
	//Задача 2f


	int sum = 0;
	cout <<"Введите 5 элментов массива"<<endl;
	int a[5];
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	f.open("text7.txt", ios::out);
	for (int i = 0; i < 5; i++)
	{
		if (a[i] < 3)
		{
			sum = a[i] + sum;
		}
		f << sum << endl;
	}
	f.close();
	
}
*/