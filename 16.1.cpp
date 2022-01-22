#include <iostream> 
using namespace std;


int main()

{
	setlocale(LC_ALL, "Russian");
	int n, x = 1;
	cout << "Введите число" << endl;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = x;
		x = x + 2;
		cout << arr[i] << endl;
	}
	delete[] arr;
	return 0;
}
