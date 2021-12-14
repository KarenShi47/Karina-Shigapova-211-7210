#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double x1, y1, x2, y2, x3, y3, st1, st2, st3, S, P, p;
    cout << "Введите x1, y1, x2, y2, x3, y3" << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    st1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    st2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    st3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    P = st1 + st2 + st3;
    p = P/2;
    S = sqrt(p*(p - st1)*(p - st2)*(p - st3));
    if ((st1 == 0) or (st2 == 0) or (st3 == 0))  {
        cout << "не может быть по условию";
    }
    else
    {

        cout << "P = " << P << endl << "S = " << S;
    }

    return 0;
}
