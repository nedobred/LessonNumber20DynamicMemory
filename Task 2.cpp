// Задание 2. Пользователь вводит с клавиатуры число.Если
// оно четное, умножить его на три, иначе — поделить на
// два. Результат вывести на экран.
#include <iostream>

int main()
{
	setlocale(LC_ALL, "");
	std::cout << "Добро пожаловать в программу!" << std::endl;

	int *digit = new int;
	std::cout << "Введите с клавиатуры целое число: ";
	std::cin >> *digit;

	if (*digit % 2 == 0)
	{
		std::cout << "Вы ввели " << *digit << " это четное число поэтому умножим его на 3: \n" << 
			*digit << " x 3 = " << * digit * 3 << std::endl;
	}
	else
	{
		std::cout << "Вы ввели " << *digit << " это нечетное число поэтому разделим его на 2: \n" <<
			*digit  << " / 2 = " << double(*digit) / 2 << std::endl;
	}
	delete digit;
	digit = nullptr;


	return 0;
}

