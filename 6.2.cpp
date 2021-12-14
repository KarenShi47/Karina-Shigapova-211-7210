#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double A, B, C;
	cout << "Введите A, B, C" << endl;
	cin >> A >> B >> C;
	swap (A, B);
	swap (C, A);
	cout << "A = " << A << endl << "B = " << B << endl << "C = " << C;
	return 0;

}
