#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x, y;
    cout << "Введите координаты x и y" << endl;
    cin >> x >> y;

    if ((x > 0 && y > 0))
    {
        cout << "Точка находится в первой четверти";
    }
    else if ((x < 0 && y > 0))
    {
        cout << "Точка находится во второй четверти";
    }
    else if ((x < 0 && y < 0))
    {
        cout << "Точка находится в третьей четверти";
    }
    else if ((x > 0 && y < 0))
    {
        cout << "Точка находится в четвертой четверти";
    }
    else
        cout << "Точка находится на координатной оси";
}
