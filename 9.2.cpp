#include <iostream>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Russian");
  int K, x;
	cout << " Введите значение K (от 1 до 365)" << endl;
	cin >> K;

	if ((0 < K) and (K < 366))
	{
		cout << endl;
		x = K % 7;
		cout << " день недели: " << x;
	}
	else
	{
		cout << " Не удовлетворяет условию задания ";
	}

	return 0;
}
