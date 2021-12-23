#include <iostream> 
using namespace std;


int main()

{
	int n;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = i;
	}
	for (int i = 0; i < n / 2; i++)
	{
		cout << arr[i] << endl;
		cout << arr[n - i - 1] << endl;
	}
	if (n % 2 == 1)
	{
		cout << arr[(n - 1) / 2];
	}
    delete[] arr;
	return 0;
}
