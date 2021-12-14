#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double A, x;
	cout << "Введите A" << endl;
	cin >> A;
	x = pow(A, 2) * pow(A, 2) * pow(A, 2);
	cout << "A^8 = " << x;


	return 0;

}
