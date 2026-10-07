#include <iostream>  
int main() {
    system("chcp 65001");
    // Переменная для длины ребра куба.
    // double — потому что ребро может быть дробным (например, 2.5).
    double edge{ 0.0 };

    // Запрашиваем длину ребра
    std::cout << "Введите длину ребра куба:";
    std::cin >> edge;

    // Считаем объём: V = a^3
    double volume{ edge * edge * edge };

    // Считаем площадь поверхности: S = 6 * a^2
    double surface{ 6.0 * edge * edge };

    // Выводим результаты
    std::cout << "Объём куба:              " << volume << '\n';
    std::cout << "Площадь поверхности куба:" << surface << '\n';

    return 0;   // 0 = успешное завершение
}