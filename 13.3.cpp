#include <iostream>

using namespace std;

int main()
{   setlocale(LC_ALL, "Russian");
    int i, n, a;
	cout << "Введите N " << endl;
	cin >> n;
	a = 0;

        for (int i = 1; i <= (2 * n - 1); i += 2) {
                a += i;
                cout << "Сумма: " << a << endl;
            }
            cout << "Квадрат числа N: " << a << endl;

        }

