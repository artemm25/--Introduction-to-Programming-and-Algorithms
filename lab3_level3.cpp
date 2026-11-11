#include <iostream>
#include <string>

int main() {
    int number, base;
    std::string result = "";
    std::string digits = "0123456789ABCDEF";

    std::cout << "Введите число от 0 до 255: ";
    std::cin >> number;

    if (number < 0 || number > 255) {
        std::cout << "Ошибка! Число должно быть от 0 до 255.";
        return 1;
    }

    std::cout << "Выберите систему (2, 8, 10, 16): ";
    std::cin >> base;

    if (base != 2 && base != 8 && base != 10 && base != 16) {
        std::cout << "Ошибка! Неверная система счисления.";
        return 1;
    }

    if (number == 0) {
        result = "0";
    }

    while (number > 0) {
        result = digits[number % base] + result;
        number = number / base;
    }

    std::cout << "Результат: " << result << std::endl;
    return 0;
}
