#include<iostream>
#include<string>

int main()
{
    std::string name;

    std::cout << "Write user name: " << std::endl;
    std::cin >> name;

    std::cout << "Hello world from " << name << std::endl;
}