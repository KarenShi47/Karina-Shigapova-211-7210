#include <iostream>
#include <math.h>
using namespace std;

int main()
{   setlocale(LC_ALL, "Russian");
    int a, n, x;
    cout << "Введите целое число N" << endl;
            cin >> n;
            a = 0;
            for (x = 0; a < n; x++, a += x) {}
            cout << "Наименьшее K равно: " << x
                << "\nСумма равна: " << a;
        }
