#include <iostream>

using namespace std;

int main()
{   setlocale(LC_ALL, "Russian");
    int a;
     cout << "Введите количество учебный заданий в диапазоне 10-40" << endl;
            cin >> a;
            if (a < 10 || a > 40)
                cout << "Введено неверное число" << endl;
            else {
                if (a == 10) cout << "Десять";
                if (a == 11) cout << "Одиннадцать";
                if (a == 12) cout << "Двенадцать";
                if (a == 13) cout << "Тринадцать";
                if (a == 14) cout << "Четырнадцать";
                if (a == 15) cout << "Пятнадцать";
                if (a == 16) cout << "Шестнадцать";
                if (a == 17) cout << "Семнадцать";
                if (a == 18) cout << "Восемнадцать";
                if (a == 19) cout << "Девятнадцать";

                if (a > 19) {
                    if (a / 10 == 2) cout << "Двадцать";
                    if (a / 10 == 3) cout << "Тридцать";
                    if (a / 10 == 4) cout << "Сорок";

                    if (a % 10 == 1) cout << " один";
                    if (a % 10 == 2) cout << " два";
                    if (a % 10 == 3) cout << " три";
                    if (a % 10 == 4) cout << " четыре";
                    if (a % 10 == 5) cout << " пять";
                    if (a % 10 == 6) cout << " шесть";
                    if (a % 10 == 7) cout << " семь";
                    if (a % 10 == 8) cout << " восемь";
                    if (a % 10 == 9) cout << " девять";
                }

                cout << " учебных заданий";
            }
}
