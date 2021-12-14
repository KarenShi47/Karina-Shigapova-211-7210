#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int sec1, min1;
		cout << " Введите число (секунды) " << endl;
		cin >> sec1;
		min1 = sec1%60;
		cout << " секунды = " << min1;


	return 0;
}
