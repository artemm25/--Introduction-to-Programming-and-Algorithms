#include <iostream>

int main() {
    setlocale(LC_ALL, ".UTF-8");

    
    const double PI = 3.14159265358979323846;

    double degrees;
    std::cout << "Введите угол в градусах: ";
    std::cin >> degrees;


    double radians = degrees * PI / 180.0;

    double backToDegrees = radians * 180.0 / PI;

    // 3. Демонстрация НЕЯВНОГО приведения
    // Переменная intDegrees типа int неявно станет double при умножении на PI
    int intDegrees = 45;
    double implicitRadians = intDegrees * PI / 180.0;

    // Вывод результатов
    std::cout << "\n" << degrees << " град. = " << radians << " рад.\n";
    std::cout << "Обратно: " << backToDegrees << " град.\n";
    std::cout << "Неявное приведение: " << intDegrees << " град. = " << implicitRadians << " рад.\n";

    return 0;
}
