#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
	int n, x = 0;
	double y = 1, a = 1.0;
	cout << "Введите N: " << endl;
	cin >> n;
	while (x < n)
	{
		x = x + 1;
		a = a + 0.1;
		y = y * a;
	}
	cout << y;
}
