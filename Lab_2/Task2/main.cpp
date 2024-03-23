// Вывод размеров основных типов данных C++

#include <iostream>

int main()
{
    // Вывод размеров основных типов данных
    std::cout << "Размер базовых типов данных:" << std::endl;
    std::cout << "bool: " << sizeof(bool) << " байт" << std::endl;
    std::cout << "char: " << sizeof(char) << " байт" << std::endl;
    std::cout << "int: " << sizeof(int) << " байт" << std::endl;
    std::cout << "float: " << sizeof(float) << " байт" << std::endl;
    std::cout << "double: " << sizeof(double) << " байт" << std::endl;

    // Вывод размеров типов данных с использованием модификаторов длины и размера
    std::cout << "Размеры типов данных с модификаторами:" << std::endl;
    std::cout << "signed short int: " << sizeof(signed short int) << " байт" << std::endl;
    std::cout << "signed long int: " << sizeof(signed long int) << " байт" << std::endl;
    std::cout << "unsigned short int: " << sizeof(unsigned short int) << " байт" << std::endl;
    std::cout << "unsigned long int: " << sizeof(unsigned long int) << " байт" << std::endl;
    std::cout << "unsigned long long int: " << sizeof(unsigned long long int) << " байт" << std::endl;

    return 0;
}

//TODO:Надо сократить код






















