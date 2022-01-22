#include <iostream> 
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
}
#include <iostream> 
using namespace std;


float Fact2(int n)
{
    double Fact2(int n);
    {
        double ans, i;
        if (n % 2 == 0)
            ans = 2;
        else
            ans = 1;
        for (i = ans + 2; i <= n; i += 2) {
            ans *= i;
        }
        return ans;
    }
}


int main()

{
    cout << "Введите целое значение N:\n";
    cin >> n;
    a = Fact2(n);
    cout << "Двойной факториал числа N равен: " << a << "\n\n";
}
