#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

const double pi = 3.1415;

double function(double x, double y)
{
    if ((y > M_PI) && (x < M_PI)) {
        return cos(0.3 * x);
    }
    else {
        if ((y <= M_PI) && (y != x)) {
            return exp(-pow(y,2));
        }
        else {
            if (y == x) {
                return 0;
            }
            else return -2; // -2 = ошибка;
        }
    }
}

bool check(double x)
{
    if (x == -2)
        return true;
    else
        return false;
}

int main()
{
    setlocale(LC_ALL, "Russian_Russia.1251"); //установка корректного русского языка
    double x, a, b, c;
    a = 31.43;      //числа a, b, c, взятые из варианта
    b = 24.93;
    c = 19.7;
    std::cout << "Введите произвольное число X: ";
    std::cin >> x;
    if (std::cin.fail()) {
        std::cout << "Неверное число x\n";
        return 0;
    }
    std::cout << std::endl;
    if (check(function(x, a))) std::cout << "Данной ветви для значений А и X не найдено" << std::endl;
        else std::cout << "Значение функции с числом A, равным " << a << " = " << function(x, a) << std::endl;
    if (check(function(x, b))) std::cout << "Данной ветви для значений B и X не найдено" << std::endl;
        else std::cout << "Значение функции с числом B, равным " << b << " = " << function(x, b) << std::endl;
    if (check(function(x, c))) std::cout << "Данной ветви для значений C и X не найдено" << std::endl;
        else std::cout << "Значение функции с числом C, равным " << c << " = " << function(x, c) << std::endl;
 }
