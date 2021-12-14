#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, SA;
    cout << "Введите a и b" << endl;
    cin >> a >> b;
    cout << "Среднее арифметическое = " << (a+b)/2;

     return 0;
}
