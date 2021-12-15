#include <iostream>
#include <math.h>
using namespace std;

int main()
{   setlocale(LC_ALL, "Russian");
    int a, n, x, y;
    cout << "Введите вещественное число А и целое число N" << endl;
            cin >> a >> n;
            y = a;
            a = -a;
            x = 1 + a;
            for (int i = 2; i <= n; i++) {
                a *= -y;
                x += a;
            }

            cout << "Полученная сумма равна: " << x;
}
