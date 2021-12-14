#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int A;
	cout << "Введите целое положительное число"<< endl;
	cin >> A;

    if (((A % 2) == 0) and ( A > 9) and (A < 100))
	{
		cout << " Данное число является положительным четным двузначным ";
	}
	else
	{
		cout << " Данное число не является положительным четным двузначным ";
	}
}
