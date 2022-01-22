#include <iostream> 
using namespace std;


float PowerA3(float A, float B)
{
    B = A * A * A;
    return B;
}


int main()

{
    setlocale(LC_ALL, "Russian");
    cout << "Описать функцию PowerA3, вычисляющую 3ю степень чисел от 1 до 5" << endl;
    cout << PowerA3(1, 0) << endl;
    cout << PowerA3(2, 0) << endl;
    cout << PowerA3(3, 0) << endl;
    cout << PowerA3(4, 0) << endl;
    cout << PowerA3(5, 0) << endl;
    return 0;
}
