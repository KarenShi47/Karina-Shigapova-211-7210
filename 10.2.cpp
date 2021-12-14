#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int A, B, C;
	cout << " Введите A, B, C " << endl;
	cin >> A >> B >> C;
	cout << " Справедливо двойное неравенство A < B < C " << endl;
	if ((A < B) and (B < C))
	{
		cout << " Верно ";
	}
	else
	{
		cout << " Неверно ";
	}

	return 0;
}
