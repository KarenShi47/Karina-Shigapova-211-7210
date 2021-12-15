#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
	cout << "Введите число" << endl;
	cin >> a;
	if ((a > 0) && (a % 2) == 0)
	{
		cout << "Четное положительное число";
	}
	else if ((a > 0) && (a % 2) != 0)
	{
		cout << "Нечетное положительное число";
	}
	else if (a == 0)
	{
		cout << "Нулевое число";
	}
	else if ((a < 0) && (a % 2) == 0)
	{
		cout << "Четное отрицательное число";
	}
	else if ((a < 0) && (a % 2) != 0)
	{
		cout << "Нечетное отрицательное число";
	}
}
