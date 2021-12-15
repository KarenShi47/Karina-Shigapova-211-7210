#include <iostream>

using namespace std;

int main()
{   setlocale(LC_ALL, "Russian");
    int a, ans, b;
     cout << "Введите номер года (от 1984)" << endl;
            cin >> a;
            if (a < 1984) {
                cout << "Введено неверное число" << endl;
            }
            else {
                cout << "Год";
                a -= 1983;
                b = 0;
                ans = 0;
                while (b < a) {
                    ans++;
                    b += 12;
                }



                if (ans % 5 == 0) {
                    if (a % 12 == 3 || a % 12 == 4 || a % 12 == 5) {
                        cout << " черного";
                    }
                    else cout << " черной";
                }
                if (ans % 5 == 1) {
                    if (a % 12 == 3 || a % 12 == 4 || a % 12 == 5) {
                        cout << " зеленого";
                    }
                    else cout << " зеленой";
                }

                if (ans % 5 == 2) {
                    if (a % 12 == 3 || a % 12 == 4 || a % 12 == 5) {
                        cout << " красного";
                    }
                    else cout << " красной";
                }

                if (ans % 5 == 3) {
                    if (a % 12 == 3 || a % 12 == 4 || a % 12 == 5) {
                        cout << " желтого";
                    }
                    else cout << " желтой";
                }

                if (ans % 5 == 4) {
                    if (a % 12 == 3 || a % 12 == 4 || a % 12 == 5) {
                        cout << " белого";
                    }
                    else cout << " белой";
                }

                if (a % 12 == 0) cout << " свиньи";
                if (a % 12 == 1) cout << " крысы";
                if (a % 12 == 2) cout << " коровы";
                if (a % 12 == 3) cout << " тигра";
                if (a % 12 == 4) cout << " зайца";
                if (a % 12 == 5) cout << " дракона";
                if (a % 12 == 6) cout << " змеи";
                if (a % 12 == 7) cout << " лошади";
                if (a % 12 == 8) cout << " овцы";
                if (a % 12 == 9) cout << " обезьяны";
                if (a % 12 == 10) cout << " курицы";
                if (a % 12 == 11) cout << " собаки";


            }

        }
