#include <iostream>
#include <limits>

int main() {
    setlocale(LC_ALL, ".UTF-8");
    double a, b;
    char operation;



    std::cout << "Введите выражение: ";

    if (!(std::cin >> a >> operation >> b)) {

        std::cout << "Ошибка: введите два числа и символ операции." << std::endl;

        return 1;

    }
    if (operation == '+') {

        std::cout << "Результат: " << a + b << std::endl;

    }
    else if (operation == '-') {

        std::cout << "Результат: " << a - b << std::endl;

    }
    else if (operation == '*') {

        std::cout << "Результат: " << a * b << std::endl;

    }
    else if (operation == '/') {

        if (b == 0.0) {

            std::cout << "Ошибка: деление на ноль невозможно." << std::endl;

            return 1;

        }
        else {

            std::cout << "Результат: " << a / b << std::endl;

        }

    }
    else {

        std::cout << "Ошибка: неизвестная операция." << std::endl;

        return 1;

    }



    return 0;

}
