#include <iostream>
int main() {

    int choice;

    setlocale(LC_ALL, ".UTF-8");

    std::cout << "Выберите фигуру:\n";

    std::cout << "1. Круг\n2. Квадрат\n3. Треугольник\n0. Выход\n";

    std::cout << "Ваш выбор: ";


    // если пользователь введет не число
    if (!(std::cin >> choice)) {

        std::cout << "Ошибка: нужно ввести число.\n";

        return 1;

    }


    // меню выбора
    switch (choice) {

    case 1: std::cout << "Вы выбрали круг.\n"; break;

    case 2: std::cout << "Вы выбрали квадрат.\n"; break;

    case 3: std::cout << "Вы выбрали треугольник.\n"; break;

    case 0: std::cout << "Выход из программы.\n"; break;

        // если вдруг пользователь введет за диапазоном
    default: std::cout << "Ошибка: выберите пункт от 0 до 3.\n"; break;

    }

    return 0;

}
