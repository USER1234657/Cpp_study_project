// 변수 이름 4개를 만듬, 입출력을 받아 사칙연산 하는 프로그램 만들기
#include <iostream>
using namespace std;

int main()
{
    int val1, val2;
    int res1, res2, res3, res4;
    cout << "첫 번째 숫자 입력: "; cin >> val1;
    cout << "두 번째 숫자 입력: "; cin >> val2;
    
    res1 = val1 + val2;
    cout << "덧셈 결과: " << res1 << endl;

    res2 = val1 - val2;
    cout << "뺄셈 결과: " << res2 << endl;

    res3 = val1 * val2;
    cout << "곱셈 결과: " << res3 << endl;

    res4 = val1 / val2;
    cout << "나눗셈 결과: " << res4 << endl;
    return 0;
}
