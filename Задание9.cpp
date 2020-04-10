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
	cout << "¬ведите размер массива: ";
	cin >> n;
	mas = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "]= ";
		cin >> mas[i];
	}
	f.open("text2.txt", ios::out);
	for (int i = 0; i < n; i++) {
		if (mas[i] > 0)
		{
			//cout << "mas[" << i << "]=" << mas[i] << endl;
			 sum = sum + 1;
			
		}
	}
	f << sum;
	f.close();
}*/
