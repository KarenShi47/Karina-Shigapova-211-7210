#include <iostream> 
using namespace std;


int Sign(float x)
{
    if (x < 0)
    {
        return -1;
    }
    else if (x == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}


int main()

{
    setlocale(LC_ALL, "Russian");
    cout << "Введите числа А и В" << endl;
    float a, b;
    cin >> a >> b;
    cout << Sign(a) + Sign(b);
    return 0;
}
