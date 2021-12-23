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
