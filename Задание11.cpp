/*
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	fstream f;
	int* mas, n;
	int sum = 0;
	int sum1 = 0;
	cout << "¬ведите размер массива: ";
	cin >> n;
	mas = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "]= ";
		cin >> mas[i];
	}
	f.open("text3.txt", ios::out);

	for (int i = 0; i < n; i++){
		sum += mas[i];
	}
	for (int i = 0; i < n; i++)
	{
		sum1 = sum / n;
		if (mas[i] < sum1)
		{
			f << mas[i] << endl;
		}
	}
	f.close();
}*/
