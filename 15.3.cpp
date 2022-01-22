#include <iostream> 
using namespace std;


float RingS(float r1, float r2)
{
    return 3.14 * r1 * r1 - 3.14 * r2 * r2;
}


int main()

{
    setlocale(LC_ALL, "Russian");
    cout << "Введите 6 чисел" << endl;
    float r1, r2, r3, r4, r5, r6;
    cin >> r1 >> r2 >> r3 >> r4 >> r5 >> r6;
    cout << RingS(r1, r2) << endl;
    cout << RingS(r3, r4) << endl;
    cout << RingS(r5, r6) << endl;
    return 0;
}
