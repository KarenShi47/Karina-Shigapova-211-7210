#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double A, B, C, a1, a2, b1, b2, c1, c2, AB, AC;
    cout << "Даны три числа А, В, С" << endl;
    cout << "Введите координаты точки А" << endl;
    cin >> a1 >> a2;
    cout << "Введите координаты точки B" << endl;
    cin >> b1 >> b2;
    cout << "Введите координаты точки C" << endl;
    cin >> c1 >> c2;
    AB = sqrt(pow(a1 - b1, 2) + (a2 - b2, 2));
    AC = sqrt(pow(a1 - c1, 2) + (a2 - c2, 2));
    if (AB <= AC)
        cout << "К точке А ближе находится точка В. Расстояние от А до В равно: " << AB;
    else
        cout << "К точке А ближе находится точка C. Расстояние от А до C равно: " << AC;
            cout << "\n\n";
        }
