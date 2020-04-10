/*#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	fstream f;
	int* mas, n, sum;
	sum = 0;
	int num = 0;
	int ieven = 0;
	
	cout << "¬ведите размер массива: ";
	cin >> n;
	mas = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "]= ";
		cin >> mas[i];
	}
	int min = mas[0];

	f.open("text4.txt", ios::out);

	for (int i = 0; i < n; i++)
		if (mas[i] % 2 == 0) {
			ieven = i; break;
		}

	for (int i = 0; i < n; i++)
		if (mas[i] % 2 == 0 && (i == ieven || mas[i] < min)) min = mas[i]; //аналогично и дл€ min
	
			f << "Min: " << min << endl;
	delete[]mas;
	f.close();
}
*/