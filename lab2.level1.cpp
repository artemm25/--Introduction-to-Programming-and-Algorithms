#include <iostream>

int main() {
	setlocale(LC_ALL, ".UTF-8");
	double num_1, num_2;

	std::cout << "введите первое число: ";
	std::cin >> num_1;

	std::cout << "введите второе число: ";
	std::cin >> num_2;

	std::cout << "среднее арифметическое : " << (num_1 + num_2) / 2.0;

	return 0;
}
