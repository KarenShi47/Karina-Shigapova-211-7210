#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, S, P;
    cout << "������� a � b" << endl;
    cin >> a >> b;
    cout << "S =" << a * b << endl<< "P ="<< a + b;
    return 0;
}
