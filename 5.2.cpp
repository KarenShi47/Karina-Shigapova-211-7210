#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double A, B, C, AC, BC, sum;
    cout << "Введите A, B, C" << endl;
    cin >> A >> B >> C;
    AC = abs(A - C);
    BC = abs(B - C);
    sum = AC + BC;
    cout << "Длина AC = " << AC << endl << "Длина BC = " << BC << endl;
    cout << "Сумма длин отрезков = " << sum;

    return 0;
}
