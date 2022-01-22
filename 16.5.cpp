#include <iostream> 
using namespace std;


int main()

{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите число" << endl;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}
	for (int i = 0; i < n; i = i + 2)
	{
		cout << arr[i] << endl;
	}
	if (n % 2 == 1)
	{
		n = n - 1;
	}
	for (int i = n - 1; i >= 0; i = i - 2)
	{
		cout << arr[i] << endl;
	}
	delete[] arr;
	return 0;
}
