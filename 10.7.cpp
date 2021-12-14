#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
	cout << " Введите a, b, c" << endl;
	cin >> a >> b >> c;
	cout << "Существует ли треугольник со сторонами a, b, c: " << endl;
	       if (a < 1 || b < 1 || c < 1) {
                cout << "Введено неверное значение a, b или c.\n\n";
            }
                else {

                   if ((a + b) > c and (a + c) > b and (b + c) > a)

		              cout << "Существует";

                   else

		              cout << "Не существует";
	}

	return 0;
}
