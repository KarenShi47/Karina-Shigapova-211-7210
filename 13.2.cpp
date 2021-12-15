#include <iostream>

using namespace std;

int main()
{   setlocale(LC_ALL, "Russian");
    double n, ans, i;
	cout << "Введите целое число N:\n";
            cin >> n;
            ans = 1;
            for (i = 1; i < n; i += 0.1) {
                ans *= i;
            }
            ans *= n;
            cout << "N равно " << ans << "\n\n";

        }
