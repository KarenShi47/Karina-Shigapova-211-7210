#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int A, x1, x2;
    cout << "Введите двузначное число" << endl;
    cin >> A;
    if ((A > 9) and (A < 100))
    {
        x1 = A / 10;
        x2 = A - (x1 * 10);
        cout << x2 << x1;
    }
    else
    {
        cout << " Не удовлетворяет условию задачи ";
    }
    return 0;
}
