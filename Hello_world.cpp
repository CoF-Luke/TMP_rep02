#include<iostream>
#include<string>

int main()
{
    std::string name; // Создание переменной name

    std::cout << "Write user name: " << std::endl; // Запрос name
    std::cin >> name; // name = "input"

    std::cout << "Hello world from " << name << std::endl; // Печать приветствия
}
