// ������� 3. �������� ���������-�����������. ������������
// ������ ��� ����� � �������� �������������� ��������.
// ������� �� ����� ���������.

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	std::cout << "����� ���������� � ��������� �����������" << std::endl;

	int *digit1 = new int{0};
	std::cout << "������� ������ �����: ";
	std::cin >> *digit1;

	int *digit2 = new int{0};
	std::cout << "������� ������ �����: ";
	std::cin >> *digit2;

	
	int *action = new int{ 0 };
	std::cout << "�������� �������������� ��������: \n1.��������\n2.���������\n3.���������\n4.������� " << std::endl;
	std::cin >> *action;

	switch (*action)
	{
	case 1:
		std::cout << "\n�����: " << *digit1 + *digit2 << std::endl;
		break;
	case 2:
		std::cout << "\n�����: " << *digit1 - *digit2 << std::endl;
		break;
	case 3:
		std::cout << "\n�����: " << *digit1 * *digit2 << std::endl;
		break;
	case 4:
		std::cout << "\n�����: " << double(*digit1) / double(*digit2) << std::endl;
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