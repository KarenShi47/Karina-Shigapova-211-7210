#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
    double a, b;
    setlocale(LC_ALL, "Russian");
    cout << "Введите a и b" << endl;
    cin >> a >> b;
    cout << "Сумма =" << abs(a) + abs(b) << endl << "Разность =" << abs(a) - abs(b) << endl; 
    cout << "Произведение =" << abs(a)*abs(b) << endl << "Частное =" << abs(a)/abs(b); 
       
       return 0;
}
