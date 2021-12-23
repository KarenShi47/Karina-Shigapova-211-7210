#include <iostream> 
using namespace std;


float PowerA3(float A, float B)
{
    B = A * A * A;
    return B;
}


int main()

{
    cout << PowerA3(1, 0) << endl;
    cout << PowerA3(2, 0) << endl;
    cout << PowerA3(3, 0) << endl;
    cout << PowerA3(4, 0) << endl;
    cout << PowerA3(5, 0) << endl;
    return 0;
}
