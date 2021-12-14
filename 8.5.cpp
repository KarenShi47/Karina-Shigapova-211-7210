#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int A, x1, x2;
    cout << " Введите трехзначное число " << endl;
    cin >> A;
    if ((A > 99) and (A < 1000))
    {
        x1 = A / 100;
        x2 = A - (x1 * 100);
        cout << x2 << x1;
    }
    else
    {
        cout << " Не удовлетворяет условию задачи ";
    }
	return 0;
}
