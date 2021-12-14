#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Russian");
  double A, B;
	cout << "Введите A , B" << endl;
	cin >> A >> B;
	swap (A, B);
	cout << "A = " << A << endl << "B = " << B;
	return 0;

}
