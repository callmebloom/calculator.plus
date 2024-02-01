#include <Windows.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    char c;
    double a, b;
    int f = 1;
    int i;
    do {
        cout << "Выберите действие: \n 1: Сложение \n 2: Вычитание \n 3: Произведение \n 4: Деление \n 5: Возвести число в степень \n 6: Найти квадратный корень из числа \n 7: Найти 1 процент от числа \n 8: Найти факториал \n 0: Выйти из программы" << endl;
        cin >> c;


        switch (c) {
        case '1':
            cout << "Введите первое число: " << endl;
            cin >> a;
            cout << "Введите  второе число: " << endl;
            cin >> b;
            cout << a << '+' << b << '=' << a + b << endl;
            break;

        case '2':
            cout << "Введите первое число: " << endl;
            cin >> a;
            cout << "Введите  второе число: " << endl;
            cin >> b;
            cout << a << '-' << b << '=' << a - b << endl;
            break;

        case '3':
            cout << "Введите первое число: " << endl;
            cin >> a;
            cout << "Введите  второе число: " << endl;
            cin >> b;
            cout << a << '*' << b << " = " << a * b << endl;
            break;

        case '4':
            cout << "Введите первое число: " << endl;
            cin >> a;
            cout << "Введите  второе число: " << endl;
            cin >> b;
            if (b != 0)
                cout << a << " / " << b << " = " << a / b << endl;
            else
                cout << "на ноль низя делить" << endl;
            break;

        case '5':
            cout << "Введите первое число: " << endl;
            cin >> a;
            cout << "Введите  второе число: " << endl;
            cin >> b;
            cout << a << '**' << b << " = " << pow(a, b) << endl;
            break;

        case '6':
            cout << "Введите число: " << endl;
            cin >> a;
            if (a >= 0)
                cout << "корень из " << a << " = " << sqrt(a) << endl;
            else
                cout << "корень есть только у положительных чисел." << endl;
            break;

        case '7':
            cout << "Введите число: " << endl;
            cin >> a;
            cout << "1% от " << a << " = " << a / 100 << endl;
            break;

        case '8':
            cout << "Введите число: " << endl;
            cin >> a;
            for (i = 1; i <= a; i++) {
                f = f * i;
            }
            cout << "факториал " << a << " = " << f << endl;
            break;

        case '0':
            cout << "пока :>" << endl;
            break;

        default:
            cout << "кажется, вы не туда жмали((" << endl;
            break;
        }
    } while (c != '0');

    return 0;
}