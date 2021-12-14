#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double x1, x2, y1, y2, S, P;
    cout << "Введите x1, x2, y1, y2" << endl;
    cin >> x1 >> x2 >> y1 >> y2;
    cout << "S = " << abs(x1 - x2)*abs(y1 - y2) << endl;
    cout << "P = " << 2*(abs(x1 - x2) + abs(y1 - y2));

    return 0;
}
