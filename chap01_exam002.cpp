//변수 두 개를 선언하여 cin으로 입력받은 두 수의 합을 출력 후
//합이 양수가 나오면 합의 숫자 만큼 입력받은 두 수를 반복하여 더한 값을 출력하라
#include <iostream>
using namespace std;

int main()
{
    float val1, val2;
    cout << "첫번째 값 입력: "; cin >> val1;
    cout << "두번째 값 입력: "; cin >> val2;

    if (val1 + val2 < 0)
    {
        cout << "음수 값이 나와 종료합니다." << endl;
        return 0;
    }

    cout << "두 수의 합: " << val1 + val2 << endl;
    cout << "합 x 합의 수: " << (val1 + val2) * (val1 + val2) << endl;
    return 0;
}