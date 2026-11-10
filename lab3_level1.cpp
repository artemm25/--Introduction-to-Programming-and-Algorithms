#include <iostream>

int main() {
	setlocale(LC_ALL, ".UTF-8");
	int num;
	
	std::cout << "Введите целое число: "; std::cin >> num;
	if (!(num)) {

		std::cout << "Ошибка: необходимо ввести целое число." << std::endl;

		return 1;
	}

	if ((num >= 100 && num <= 999) || (num <= -100 && num >= -999)) {
		std::cout << "трехзначное";
	}
	else {
		std::cout << "не трехзначное";

	}
	return 0;
}
