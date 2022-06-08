//StringIO p021
#include <iostream>

int main()
{
    char name[50];
    char lang[100];

    std::cout << "이름은 무엇입니까? ";
    std::cin >> name;

    std::cout << "가장 좋아하는 언어는 무엇입니까? ";
    std::cin >> lang;

    std::cout << "내 이름은 " << name << "입니다.\n";
    std::cout << "가장 좋아하는 언어는 " << lang << "입니다." << std::endl;
    return 0;
}

// \n과 std::endl;은 같은 개행의 의미를 가진다.