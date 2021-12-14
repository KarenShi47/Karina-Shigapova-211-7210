#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double A, B, C, AC, BC, x;
    cout << "Введите A, B, C" << endl;
    cin >> A >> B >> C;
    if ((A > C and C > B) or (A < C and C < B))
        {
        AC = abs(A - C);
        BC = abs(B - C);
        x = AC*BC;
        cout << "AC = " << AC << endl << "BC = " << BC << endl;
        cout << "AC*BC = " << x;

        }

     return 0;
}
