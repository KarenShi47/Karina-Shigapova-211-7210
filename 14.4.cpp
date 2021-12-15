#include <iostream>
#include <math.h>
using namespace std;

int main()
{   setlocale(LC_ALL, "Russian");
    double x, P, y;
    cout << "Введите количество процентов (от 0 до 25)" << endl;
    cin >> P;
    x = 1000;
    P *= 0.01;
        for (y = 0; x <= 1100; y++, x += x * P) {}
            cout << "Деньги в банке через " << y << " месяцa(ев) превысит 1100 руб"
                << "\nИтоговый размер вклада равен: " << x;

}
