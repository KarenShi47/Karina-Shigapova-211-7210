#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int K, N, x;
	cout << " Введите значение K (от 1 до 365)" << endl;
	cin >> K;
	cout << " Введите значние N (от 1 до 7) " << endl;
	cin >> N;
	if ((0 < K) and (K < 366) and (0 < N) and (N < 8))
	{
		cout << endl;
		N = N - 2;
		x = ((K + N) % 7) + 1;
		cout << " День недели: " << x;
	}
	else
	{
		cout << " Не удовлетворяет условиям задачи ";
	}

	return 0;
}
