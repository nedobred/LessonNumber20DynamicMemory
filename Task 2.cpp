// ������� 2. ������������ ������ � ���������� �����.����
// ��� ������, �������� ��� �� ���, ����� � �������� ��
// ���. ��������� ������� �� �����.
#include <iostream>

int main()
{
	setlocale(LC_ALL, "");
	std::cout << "����� ���������� � ���������!" << std::endl;

	int *digit = new int;
	std::cout << "������� � ���������� ����� �����: ";
	std::cin >> *digit;

	if (*digit % 2 == 0)
	{
		std::cout << "�� ����� " << *digit << " ��� ������ ����� ������� ������� ��� �� 3: \n" << 
			*digit << " x 3 = " << * digit * 3 << std::endl;
	}
	else
	{
		std::cout << "�� ����� " << *digit << " ��� �������� ����� ������� �������� ��� �� 2: \n" <<
			*digit  << " / 2 = " << double(*digit) / 2 << std::endl;
	}
	delete digit;
	digit = nullptr;


	return 0;
}

