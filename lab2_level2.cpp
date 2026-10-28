#include <iostream>
#include <cmath> // Подключаем математику для функции sqrt()

int main() {
    setlocale(LC_ALL, ".UTF-8");


    int a;
    int b;
    double c; // так как число может быть дробным


    std::cout << "Введите первый катет (целое число): ";
    std::cin >> a;

    std::cout << "Введите второй катет (целое число): ";
    std::cin >> b;


    c = std::sqrt(static_cast<double>(a * a + b * b));

    // 4. Вывод результата
    std::cout << "Гипотенуза равна: " << c;

    return 0;
