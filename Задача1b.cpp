/*#include <iostream>
#include <fstream>
#include<cstdlib>
#include <ctime>
#include <iomanip>
#include <locale>
using namespace std;
//Задача 1b
int main()
{
	setlocale(LC_ALL,"Russian");
	fstream f;
	
	int RandomArray[10]{};
	srand(time(NULL));
	f.open("text5.txt", ios::out);
	for (int i = 0; i < 10; i++)
	{
		RandomArray[i] = 10 + rand() % 11;
	}

	for (int i = 0; i < 10; i++)
	{
		f << RandomArray[i] << " ";
	}
	cout << endl;
	f.close();
}*/





