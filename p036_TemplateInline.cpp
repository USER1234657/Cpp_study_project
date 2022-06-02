//p036 템플릿 인라인 함수 예시
#include <iostream>

template <typename T>
inline T SQUARE(T x)
{
    return x*x;
}

int main()
{
    std::cout << SQUARE(5.5) << std::endl;
    std::cout << SQUARE(12) << std::endl;
    return 0;
}