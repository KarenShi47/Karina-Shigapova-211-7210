/*#include <iostream> 
using namespace std;


float Fact2(int n)
{   
    float x = 1;
    if (n%2 == 1)
    {
        for (int i = 1; i <= n; i = i + 2)
        {
            x = x * i;
        }
    }
        
    else
    {
        for (int i = 2; i <= n; i = i + 2)
        {
            x = x * i;
        }
    }
    return x;
}


int main()

{
    return 0;
}*/

#include <iostream>
#include <math.h>

using namespace std;



double Fact2(int n) 
{
    double a, i;
    if (n % 2 == 0)
        a = 2;
    else
        a = 1;
    for (i = a + 2; i <= n; i += 2) {
        a *= i;
    }
    return a;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, n;
    double x, b;
        {
            cout << "Введите целое значение N:" << endl;
            cin >> n;
            x = Fact2(n);
            cout << "Двойной факториал числа N равен: " << x << endl;
        }

        
    return 0;
}
