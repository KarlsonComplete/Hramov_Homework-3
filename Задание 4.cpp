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
	//������ 4
		const unsigned short SIZE = 5;
		int arr[SIZE];
		int mul = 1;

		cout << "������ ������ � �� 10 ���������,����� ������������ ������������� \n"
			<< "��������� � ������� �� �����..\n" << endl << endl;
		f.open("text.txt", ios::out);
		for (int i = 0; i < SIZE; i++)
			cin >> arr[i];
		cout << "�������� ������" << endl;
		for (int i = 0; i < SIZE; i++)
		{
			cout << arr[i] << setw(5);
			if (arr[i] < 0)
				mul *= arr[i];
		}
		f << endl;
		f << "������������ ������������� ����� �����: " << mul << endl;

		f.close();
		system("pause");
		return 0;
		
		
}*/