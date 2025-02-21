// Задание 1. Пользователь с клавиатуры вводит 5 оценок
// студента. Определить, допущен ли студент к экзамену.
// Студент получает допуск, если его средний балл 4 балла и выше.

#include <iostream>

int main()
{
    setlocale(LC_ALL, "");
    int SIZE = 5;
    int *grades = new int [SIZE];
    double erageGrades = 0;
    
    
    ////////////////////////////////////////////////
    std::cout << "Введите пять оценок студента!" << std::endl;
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << "Оценка # " << i+1 << ": ";
        std::cin >> grades[i];
    }

    

    ////////////////////////////////////////////////
    for (int i = 0; i < SIZE; i++)
    {
        erageGrades += grades[i];
    }

    ////////////////////////////////////////////////
    delete[] grades;
    grades = nullptr;
    ////////////////////////////////////////////////
    
    if (erageGrades / SIZE > 4)
    {
        std::cout << "\nСредний бал студента: " << erageGrades / SIZE << std::endl << 
            "Студент получает допуск" << std::endl;
    }
    else
    {
        std::cout << "\nСредний бал студента: " << erageGrades / SIZE << std::endl << 
            "Студент не получает допуск" << std::endl;
    }
    return 0;
        
}


