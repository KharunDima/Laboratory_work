//Программа выводит информацию о студенте, факультете, группе и университете

/*Используемая библиотека iostream для ввода-вывода,
 *string для работы со строками и iomanip для управления выводом*/
#include <iostream>
#include <string>
#include <iomanip>

//Точка входа в программу
int main()
{
    /*Заданы строки звездочек, сообщения, факультета,
     *группы, студент и город для хранения информации*/
    std::string stars = "*****";
    std::string message = "TUSUR";
    std::string faculty = "Faculty: Additional Education";
    std::string group = "Group: 315";
    std::string student = "Student: Kharun Dmitii";
    std::string city = "Tomsk 2024";

    /* Информация о факультете, группе, студенте и городе  осуществляется
     *  с помощью setw и выводится в консольное окно */
    std::cout << stars << std::internal << std::setw(50)
        << message << std::setw(50) << stars <<"\n"<<"\n"<<"\n"
        << std::setw(100) << faculty <<"\n"<< std::setw(81) << group
        << std::setw(132) << student <<"\n"<<"\n"<<"\n" << std::setw(59)
        << city << std::endl;

    //Завершение без ошибок
    return 0;
}
