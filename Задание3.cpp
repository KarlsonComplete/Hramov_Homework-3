/*#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	fstream f;
	int* mas, n, sum;
	sum = 0;
	cout << "������� ������ �������: ";
	cin >> n;
	mas = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "]= ";
		cin >> mas[i];
	}
	f.open("text1.txt", ios::out);
	for (int i = 0; i < n; i++)
	{
		if (mas[i] % 2 == 0) { 
			sum += mas[i];
			f << "����� ������ ��������� ������� ����� " << sum << endl;
		}
		else {
			sum += mas[i];
			f << "����� �������� ��������� ������� ����� " << sum << endl;
		}
	}
	return 0;
	f.close();
}*/
