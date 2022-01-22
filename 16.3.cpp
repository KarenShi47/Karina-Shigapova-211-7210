#include <iostream> 
using namespace std;


int main()

{
	setlocale(LC_ALL, "Russian");
	int n, a, b, x = 0;
	cout << "Введите числа" << endl;
	cin >> n >> a >> b;
	int* arr = new int[n];
	arr[0] = a;
	arr[1] = b;
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = 0; j < i + 2; j++)
		{
			x = x + arr[j];
		}
		arr[i + 2] = x;
		x = 0;
		cout << arr[i + 2] << endl;
	}
	delete[] arr;
	return 0;
}
