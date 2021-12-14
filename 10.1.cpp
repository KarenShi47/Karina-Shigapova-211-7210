#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int A, B;
	cout << " Введите A и B " << endl;
	cin >> A >> B;
	cout << " Справедливы неравенства A > 2 и B <= 3 "<< endl;
	if ((A > 2) and (B <= 3))
	{
		cout << " Верно ";
	}
	else
	{
		cout << " Неверно ";
	}

	return 0;
}
