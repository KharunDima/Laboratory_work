/*Программа вычисляет.
1. Скорость прямолинейного движения (по расстоянию и времени).
2. Ускорение (по начальной скорости, конечной скорости и времени).
3. Радиус круга (по длине его окружности).*/

//Библиотека iostream для ввода-вывода
#include <iostream>

// функция для расчета радиуса круга
double CircleRadiusCalculation(int a)
{
    double res = a  / (2.0 * 3.14159);

    return res;
}

// функция для расчета скорости прямолинейного движения
int SpeedCalculations(int a, int b)
{
    int res =  a / b;

    return res;
}

// функция для расчета ускорения
int AccelerationCalculations(int a, int b, int c)
{
    int res = (a - b) / c;

    return res;
}

// Вывод меню для выбора операции
int main()
{
    std::cout <<"Выберите операцию для вычисления с использованием цифр 1,2,3.""\n""\n"
                "1. Вычислить скорость прямолинейного движения (по расстоянию и времени) .""\n"
                "2. Вычислить ускорение (по начальной скорости, конечной скорости и времени).""\n"
                "3. Вычислить радиус круга (по длине его окружности).""\n ";

    int user;
    std::cin >> user;

    if (user == 1)
    {
        std::cout << "1. Вычислить скорость прямолинейного движения:" << std::endl;
        std::cout << "Введите время:" << std::endl;
        int user_time;
        std::cin >> user_time;
        std::cout << "Введите расстояние:" << std::endl;
        int user_dist;
        std::cin >> user_dist;
        std::cout << "Скорость:" << SpeedCalculations(user_time, user_dist) << std::endl;
    }
    else if (user == 2)
    {
        std::cout << "2. Вычислить ускорение:" << std::endl;
        std::cout << "Введите начальную скорость:" << std::endl;
        int user_speed;
        std::cin >> user_speed;
        std::cout << "Введите конечную скорость:" << std::endl;
        int user_fspeed;
        std::cin >> user_fspeed;
        std::cout << "Введите время:" << std::endl;
        int user_time;
        std::cin >> user_time;
        std::cout << "Ускорение:" << AccelerationCalculations(user_speed, user_fspeed, user_time) << std::endl;
    }
    else if (user == 3)
    {
        std::cout << "3. Вычислить радиус круга:" << std::endl;
        std::cout << "Введите длину окружности:" << std::endl;
        int user_circle;
        std::cin >> user_circle;
        std::cout << "Радиус круга:" << CircleRadiusCalculation(user_circle) << std::endl;
    }
    else
    {
        std::cout << "Ошибка:" << std::endl;
    }

    return 0;
}

// TODO: Исправить тип данных  на double
