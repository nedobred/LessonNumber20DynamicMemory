// Задание 3. Написать программу-калькулятор. Пользователь
// вводит два числа и выбирает арифметическое действие.
// Вывести на экран результат.

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	std::cout << "Добро пожаловать в программу КАЛЬКУЛЯТОР" << std::endl;

	int *digit1 = new int{0};
	std::cout << "Введите первое число: ";
	std::cin >> *digit1;

	int *digit2 = new int{0};
	std::cout << "Введите второе число: ";
	std::cin >> *digit2;

	
	int *action = new int{ 0 };
	std::cout << "Выберите арифметическое действие: \n1.сложение\n2.вычитание\n3.умножение\n4.деление " << std::endl;
	std::cin >> *action;

	switch (*action)
	{
	case 1:
		std::cout << "\nОтвет: " << *digit1 + *digit2 << std::endl;
		break;
	case 2:
		std::cout << "\nОтвет: " << *digit1 - *digit2 << std::endl;
		break;
	case 3:
		std::cout << "\nОтвет: " << *digit1 * *digit2 << std::endl;
		break;
	case 4:
		std::cout << "\nОтвет: " << double(*digit1) / double(*digit2) << std::endl;
		break;
	}

	delete digit1;
	digit1 = nullptr;
	delete digit2;
	digit2 = nullptr;
	delete action;
	action = nullptr;


	return 0;
}