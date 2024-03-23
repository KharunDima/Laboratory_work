/*Этa программа переводит заданные числа из обычной записи в экспоненциальную
  и определит количество значащих цифр для каждого числа.*/

#include <iostream>

// Для управления форматированием вывода
#include <iomanip>

// Для функции log10
#include <cmath>


int main()
{
    // Заданные числа
    double numbers[] = {34.50, 0.004000, 123.005, 146000};

    // Цикл для обработки каждого числа
    for (int i = 0; i < 4; i++) {
        double number = numbers[i];

        // Находим количество значащих цифр для каждого числа
        int significantDigits = 0;
        if (number > 1) {
            significantDigits = 1 + (int) log10(number);
        }
        else if (number < 1) {
            significantDigits = -1 + (int) log10(number);
        }

        // Выводим число в экспоненциальной форме с определенным количеством значащих цифр
        std::cout << "Number" << std::fixed << std::setprecision(significantDigits+2) << number
                  << "in exponential form: " << std::scientific << number << std::endl;

        // Выводим количество значащих цифр в консоль
        std::cout << "The number of significant digits: " << significantDigits << std::endl;
    }

    return 0;
}

