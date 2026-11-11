#include <iostream>

int main() {
    setlocale(LC_ALL, ".UTF-8");
    char unit;
    double value, result;

    std::cout << "Конвертер единиц:\n";
    std::cout << "1 - дюймы в сантиметры\n";
    std::cout << "2 - футы в метры\n";
    std::cout << "3 - мили в километры\n";

    std::cout << "Выберите преобразование: ";
    std::cin >> unit;

    std::cout << "Введите значение: ";
    std::cin >> value;

    switch (unit) {
    case '1':
    case 'd':
        result = value * 2.54;
        std::cout << value << " дюймов = "
            << result << " см\n";
        break;

    case '2':
    case 'f':
        result = value * 0.3048;
        std::cout << value << " футов = "
            << result << " м\n";
        break;

    case '3':
    case 'm':
        result = value * 1.60934;
        std::cout << value << " миль = "
            << result << " км\n";
        break;

    default:
        std::cout << "Неверный выбор!\n";
    }

    return 0;
}
