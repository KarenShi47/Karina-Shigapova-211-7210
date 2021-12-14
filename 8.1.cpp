#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int b, k;
	cout << "Введите размер файла (в байтах): " << endl;
	cin >> b;
	k = (b / 1024);
	if (b%1024 == 0)
	{
		cout << "Количество килобайт = " << k;
	}
	else if (b%1024!=0)
	{
		cout << "Количество килобайт = " << k + 1;
	}

	return 0;
}
