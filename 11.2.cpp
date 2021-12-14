#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c;
	cout << " Введите три числа " << endl;
	cin >> a >> b >> c;
	if (b <= c && b <= a)
	{
		cout << "Сумма двух наибольших чисел = " << a + c;
	}
	else
	{
		if (a <= c && a <= b)
		{
			cout << "Сумма двух наибольших чисел = " << b + c;
		}
		else
		{
			cout << "Сумма двух наибольших чисел = " << b + a;
		}
	}

}
