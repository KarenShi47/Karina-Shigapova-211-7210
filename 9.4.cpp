#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int A, B, C, S1, S2, x1, x2;
	cout << " Введите A, B, C " << endl;
	cin >> A >> B >> C;
	if ((A > 0) and (B > 0) and (C > 0))
	{
		x1 = A/C;
		x2 = B/C;
		S1 = x1 * x2;
		S2 = A * B - C*C*S1;
		cout << " Количество квадратов = " << S1 << endl << "Площадь незанятой части прямоугольника = " << S2;
	}
	else
	{
		cout << " Не соответствует условиям задачи ";
	}

	return 0;
}
