#include <iostream> 
using namespace std;


int Quarter(float x, float y)
{
    if (x > 0 and y > 0)
    {
        return 1;
    }
    else if (x < 0 and y > 0)
    {
        return 2;
    }
    else if (x < 0 and y < 0)
    {
        return 3;
    }
    else
    {
        return 4;
    }
}


int main()

{
    setlocale(LC_ALL, "Russian");
    cout << "Введите координаты" << endl;
    float x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << Quarter(x1, y1) << endl;
    cout << Quarter(x2, y2) << endl;
    cout << Quarter(x3, y3) << endl;
    return 0;
