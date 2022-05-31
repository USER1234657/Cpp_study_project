//p22 1-1 2번
#include <iostream>

int main()
{
    char name[24], phone_num[24];
    std::cout << "당신의 이름은 무엇입니까? ";
    std::cin >> name;
    std::cout << "전화번호는 무엇입니까? ";
    std::cin >> phone_num;

    std::cout << "이름: " << name << std::endl;
    std::cout << "전화번호: " << phone_num << std::endl;
}