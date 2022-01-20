/* #include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b;
	cout << "Введите значения А и В" << endl;
	cin >> a >> b;

	if (a != b) {
		a = a + b;
		b = a;
		cout << " А = " << a << endl << " В = " << b << endl;
	}
	else {
		a = b = 0;
		cout << " A = " << a << endl << " B = " << b << endl;
	}
	 return 0;
} */

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите значения А и В" << endl;
	cin >> a >> b;

	if (a != b)
	{
		a = max(a, b);
		b = a;
		cout << " А = " << a << endl << " В = " << b << endl;
	}
	else
	{
		a = b = 0;
		cout << " A = " << a << endl << " B = " << b << endl;
	}
	return 0;
}
