#include <iostream>
#include <math.h>
using namespace std;

int main()
{   setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "Введите целые положительные числа А и В:" << endl;
            cin >> a >> b;
            while (a != 0 and b != 0) {
                if (a > b) {
                    a %= b;
                }
                else
                    b %= a;
            }

            cout << "Наибольший общий делитель: " << a + b;
        }
