#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
	cout << "Введите число от 1 до 999" << endl;
	cin >> a;
	if (a % 2 == 0);
	else cout << "не";
	cout << "четное ";
	if (a / 100 > 0 && a / 100 < 10) cout << "трехзначное ";
	else if (a / 10 > 0 && a / 10 < 10) cout << "двузначное ";
	else if (a / 10 == 0) cout << "однозначное";
	cout << "число";
}
