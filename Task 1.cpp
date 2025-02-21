// Задание 1. Пользователь с клавиатуры вводит 5 оценок
// студента. Определить, допущен ли студент к экзамену.
// Студент получает допуск, если его средний балл 4 балла и выше.

#include <iostream>

int main()
{
    setlocale(LC_ALL, "");
   
    int *grades = new int [5];
    double *erageGrades = new double(0);
    
    
    ////////////////////////////////////////////////
    std::cout << "Введите пять оценок студента!" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Оценка # " << i+1 << ": ";
        std::cin >> grades[i];
    }

    ////////////////////////////////////////////////
    for (int i = 0; i < 5; i++)
    {
        *erageGrades = *erageGrades + grades[i];
    }

    ////////////////////////////////////////////////
    delete[] grades;
    grades = nullptr;
    ////////////////////////////////////////////////
    
    if ((*erageGrades) / 5 >= 4)
    {
        std::cout << "\nСредний бал студента: " << (*erageGrades) / 5 << std::endl << 
            "Студент получает допуск" << std::endl;
    }
    else
    {
        std::cout << "\nСредний бал студента: " << (*erageGrades) / 5 << std::endl << 
            "Студент не получает допуск" << std::endl;
    }

    delete erageGrades;
    erageGrades = nullptr;

    return 0;
        
}


