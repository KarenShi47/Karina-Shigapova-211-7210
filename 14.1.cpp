#include <iostream>
#include <math.h>
using namespace std;

int main()
{   setlocale(LC_ALL, "Russian");
    int a, n, x, y, i, h;
    cout << "Введите числа А и В (A < B)" << endl;
            cin >> a >> n;
             for (int i = a; i <= n; i++) {
                for (int h = 0; h < i; h++) {
                    cout << i << " ";
                }
                cout << endl;
            }

        }
