#include <iostream> 
using namespace std;


int main()

{
	int n, a, d;
	cin >> n >> a >> d;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = a;
		a = a * d;
		cout << arr[i] << endl;
	}
    delete[] arr;
	return 0;
}
