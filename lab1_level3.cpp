#include <iostream>  
int main() {
    // Переменные для ввода — целые числа (часы и минуты)
    int hours{ 0 };
    int minutes{ 0 };

    // Запрашиваем часы и минуты
    std::cout << "Введите часы:  ";
    std::cin >> hours;

    std::cout << "Введите минуты: ";
    std::cin >> minutes;

    // Общее количество минут: 1 час = 60 минут
    int totalMinutes{ hours * 60 + minutes };

    // Общее количество секунд: 1 минута = 60 секунд
    int totalSeconds{ totalMinutes * 60 };

    // Выводим результаты
    std::cout << "\n--- Результат ---\n";
    std::cout << "Всего минут: " << totalMinutes << '\n';
    std::cout << "Всего секунд: " << totalSeconds << '\n';

    return 0; // 0 = успешное завершение
}