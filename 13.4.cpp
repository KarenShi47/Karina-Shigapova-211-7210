#include <iostream>
#include <math.h>
using namespace std;

int main()
{   setlocale(LC_ALL, "Russian");
    int a, n, x, y;
    cout << "Введите вещественное число А и целое число N" << endl;
            cin >> a >> n;

            x= 1;
            y = a;
            for (int i = 1; i <= n; i++) {
                x += a;
                a *= y;
            }

            cout << "Cумма равна " << x;
        }
