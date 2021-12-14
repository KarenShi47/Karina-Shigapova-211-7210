#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b;
	cout << " Введите целое число " << endl;
	cin >> a;
	if (a >= 0)
	{
		b = (a / 100) + 1;
		cout << b;
	}
	else
	{
		cout << " Не соответствует условиям задачи ";
	}


	return 0;
}
