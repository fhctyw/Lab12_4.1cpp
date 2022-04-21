#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;


bool cpp_find_read(string path, int _i, int _j)
{
	string line;

	fstream file;
	file.open(path, ios::in);
	for (size_t i = 0; i < _i+1; i++)
		getline(file, line);
	
	return line.at(_j - 1) == 'n' && line.at(_j + 1) == 'o';
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string path;
	int i, j;
	cout << "������ ����: "; getline(cin, path);
	cout << "������ i = "; cin >> i;
	cout << "������ j = "; cin >> j;
	bool isFind = cpp_find_read(path, i, j);
	if (isFind)
		cout << "�" << endl;
	else
		cout << "����" << endl;

	return 0;
}