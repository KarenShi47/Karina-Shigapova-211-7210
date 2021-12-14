#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Russian");
  double A, x, y;
	cout << "Введите A" << endl;
	cin >> A;
	x = pow(A, 3) * pow(A, 3) * pow(A, 3);
	y = x * pow(A, 3) * pow(A, 3);
	cout << "А^15 = " << y;


	return 0;

}
