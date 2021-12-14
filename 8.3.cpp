#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Russian");
  int A, B, y, x;
	cout << "Введите A и B (A > B)" << endl;
	cin >> A >> B;
	if (A > B)
	{
		y = A / B;
		x = A - y * B;
		cout << "Длина незанятой части отрезка A = " << x;
	}
	else
	{
		cout << "Не удовлетворяет условию задачи";
	}
	return 0;
}
