#include <iostream>

int main()
{
    std::string name;
    int age;

    std::cout << "Hello, what is your name?" << std::endl;
    std::cin >> name;
    std::cout << "I'm glad to see you, " << name << std::endl;
    std::cout << "What is your age?" << std::endl;
    std::cin >> age;
    std::cout << "I thought you are " << age+1 << " years old. You look older!" <<std::endl;

    return 0;
}
