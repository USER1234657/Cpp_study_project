//p25 함수 오버로딩
#include <iostream>

void MyFunc()
{
    std::cout << "MyFunc(void) called" std::endl;
}

void MyFunc(char c)
{
    std::cout << "MyFunc(char c) called" std::endl;
}

void MyFunc(int a, int b)
{
    std::cout << "MyFunc(int a, int b) called" std::endl;
}