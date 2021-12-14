#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b;
    cout << "Введите a и b" << endl;
    cin >> a >> b;
    cout << "Сумма =" << a*a + b*b << endl << "Разность =" << a*a-b*b << endl;
    cout<< "Произведение =" << (a*a)*(b*b) << endl << "Частное =" << (a*a)/(b*b);

       return 0;
}
