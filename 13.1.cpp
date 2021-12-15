#include <iostream>

using namespace std;

int main()
{   setlocale(LC_ALL, "Russian");
    double  n, t=0;
	cout << "Введите цену за 1 кг конфет "<< endl;
	cin >> n;
	while (t < 10)
	{
		t = t + 1;
		cout << (float)((n / 10) * t) << endl;
	}
}
