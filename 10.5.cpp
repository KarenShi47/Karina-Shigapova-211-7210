#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int A;
    cout << "Введите четырехзначное число" << endl;
    cin >> A;
    A = abs(A);
    if ((A % 10 == A / 1000) and (A % 100 / 10 == A % 1000 / 100))
    {
        cout << " Данное число читается одинаково слева направо и справа налево " << endl;
    }
    else
    {
        cout << " Данное число не читается одинаково слева направо и справа налево ";
    }
    return 0;
}
