#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Russian");
  int A, B, x;
	cout << "Введите A и B (A > B): " << endl;
	cin >> A >> B;
	if (A > B)
	{
		x = A / B;
		cout << "Количество отрезков B = " << x;
	}
	else
	{
		cout << "Не удовлетворяет условию задачи";
	}
	return 0;
}
