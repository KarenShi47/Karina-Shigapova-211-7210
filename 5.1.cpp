#include <iostream>
#include <math.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double x1, x2, y1, y2;
    cout << "Введите координаты x1 x2 y1 y2" << endl;
    cin >> x1 >> x2 >> y1 >> y2;
    cout << "Расстояние = " << sqrt (pow (x1-x2, 2) + pow (y1-y2, 2));

    return 0;
}
