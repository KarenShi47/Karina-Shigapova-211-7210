#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double x, y;
	cout << "Введите x" << endl;
	cin >> x;
	y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
	cout << "y = " << y;
	
	
	return 0;

}
