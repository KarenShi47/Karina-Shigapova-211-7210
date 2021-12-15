#include <iostream>
#include <math.h>
using namespace std;

int main()
{   setlocale(LC_ALL, "Russian");
    int n, k, a, b;
    cout << "Введите целое число N (> 1), являющееся числом Фибоначчи" << endl;
            cin >> n;
            if (n == 0)
                k = 1;
            else {
                for (a = 1, b = 1, k = 3; n != a; a = a + b, b = a - b, k++) {
                    if (n < a) {
                        k = -1;
                        break;
                    }
                }
            }
            if (k == -1) {
                cout << "N не является числом Фибоначчи";
            }
            else {
                if (k == 3)
                    cout << "N может быть 2 или 3";
                else
                    cout << "N равняется: " << k;
            }
}
