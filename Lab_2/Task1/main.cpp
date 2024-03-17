/*Калькулятора веса вычисляет диапазон веса,
который является идеальным для Вас с учётом указанного роста, возраста и пола по формуле Брока.*/


//Библиотека iostream для ввода-вывода
#include <iostream>

//Библиотека математических функций
#include <cmath>

//Функция для расчета идеального веса по формуле Брока
double CalculateBrocaWeight(int height, bool isMale)
{
    return isMale ? (height - 100) * 0.9 : (height - 100) * 0.85;
}

//Функция для расчета индекса массы тела
double CalculateBMI(int weight, int height)
{
    return weight / pow(height / 100.0, 2);
}

//Функция для вывода статуса на основе индекса массы тела
void PrintBMIStatus(double BMI, int age, bool isMale)
{
    // TODO: Нужно подумать  =)
    std::string category;
    if (age >= 19 && age <= 24) {
        category = isMale ? (BMI < 21.4 ? "Недостаток веса" : (BMI < 25 ? "Нормальный вес" : "Избыточный вес")) : (BMI < 19.5 ? "Недостаток веса" : (BMI < 23.2 ? "Нормальный вес" : "Избыточный вес"));
    } else if (age >= 25 && age <= 34) {
        category = isMale ? (BMI < 21.6 ? "Недостаток веса" : (BMI < 25 ? "Нормальный вес" : "Избыточный вес")) : (BMI < 23.2 ? "Недостаток веса" : (BMI < 23.2 ? "Нормальный вес" : "Избыточный вес"));
    } else if (age >= 35 && age <= 44) {
        category = isMale ? (BMI < 22.9 ? "Недостаток веса" : (BMI < 25 ? "Нормальный вес" : "Избыточный вес")) : (BMI < 23.4 ? "Недостаток веса" : (BMI < 23.4 ? "Нормальный вес" : "Избыточный вес"));
    } else if (age >= 45 && age <= 54) {
        category = isMale ? (BMI < 25.8 ? "Недостаток веса" : (BMI < 25 ? "Нормальный вес" : "Избыточный вес")) : (BMI < 25.2 ? "Недостаток веса" : (BMI < 25.2 ? "Нормальный вес" : "Избыточный вес"));
    } else {
        category = isMale ? (BMI < 26.6 ? "Недостаток веса" : (BMI < 25 ? "Нормальный вес" : "Избыточный вес")) : (BMI < 27.3 ? "Недостаток веса" : (BMI < 27.3 ? "Нормальный вес" : "Избыточный вес"));
    }
    std::cout << "Ваш ИМТ равен " << BMI << ". Согласно таблице, ваш вес относится к категории: " << category << std::endl;
}

//Точка входа в программу
int main()
{

    int age, height, weight;
    bool isMale;

    std::cout << "Введите возраст: ";
    std::cin >> age;
    std::cout << "Введите вес: ";
    std::cin >> weight;
    std::cout << "Введите рост: ";
    std::cin >> height;
    std::cout << "Если мужчина, введите 1, если женщина, введите 0: ";
    std::cin >> isMale;

// Расчет и вывод идеального веса по формуле Брока
    double brocaWeight = CalculateBrocaWeight(height, isMale);
    std::cout << "Ваш идеальный вес по формуле Брока равен " << brocaWeight << " кг." << std::endl;

//Расчет индекса массы тела и вывод статуса
    double BMI = CalculateBMI(weight, height);
    PrintBMIStatus(BMI, age, isMale);

    return 0;
}



