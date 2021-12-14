#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Введите стороны треугольника a, b, c" << endl;
            cin >> a >> b >> c;
            if (a < 1 || b < 1 || c < 1) {
                cout << "Введено неверное значение a, b, c";
            }
            else {
                if ((a * a + b * b == c * c)
                    || (a * a + c * c == b * b)
                        || (b * b + c * c == a * a))
                            cout << "Треугольник со сторонами a, b, c является прямоугольным";
                else
                    cout << "Треугольник со сторонами a, b, c не является прямоугольным";
            }


             return 0;
        }
