#include <iostream>
using namespace std;

#define SET_MENU 1
#define MON 2
#define TUE 3
#define WED 4
#define THU 5
#define FRI 6
#define SAT 7
#define SUN 8
#define ALL 9
#define EXIT 10

int main()
{
    char rice[30], soup[30], side1[30], side2[30], side3[30];
    char mon_rice[30], mon_soup[30], mon_side1[30], mon_side2[30], mon_side3[30];
    char tue_rice[30], tue_soup[30], tue_side1[30], tue_side2[30], tue_side3[30];
    char wed_rice[30], wed_soup[30], wed_side1[30], wed_side2[30], wed_side3[30];
    char thu_rice[30], thu_soup[30], thu_side1[30], thu_side2[30], thu_side3[30];
    char fri_rice[30], fri_soup[30], fri_side1[30], fri_side2[30], fri_side3[30];
    char sat_rice[30], sat_soup[30], sat_side1[30], sat_side2[30], sat_side3[30];
    char sun_rice[30], sun_soup[30], sun_side1[30], sun_side2[30], sun_side3[30];
    int input = 0, loop = true;

    while (loop)
    {   
        if (input == 0)
        {
            cout << "선택(1: 식단변경, 2: 월, 3: 화, 4: 수, 5: 목, 6: 금, 7: 토, 8: 일, 9: 식단_출력, 10: 종료): " << endl;
            cin >> input;
        }
        
        else if (input == SET_MENU)
        {
            cout << "밥: "; cin >> rice;
            cout << "국: "; cin >> soup;
            cout << "반찬1: "; cin >> side1;
            cout << "반찬2: "; cin >> side2;
            cout << "반찬3: "; cin >> side3;
            cout << "밥: " << rice << ", 국: " << soup << ", 반찬1: " << side1 << ", 반찬2: " << side2 << ", 반찬3: " << side3 << endl;
            input = 0;
        }
        
        else if (input == MON)
        {
            mon_rice[30] = rice[30], mon_soup[30] = soup[30], mon_side1[30] = side1[30], mon_side2[30] = side2[30], mon_side3[30] = side3[30];
            cout << "월요일 밥: " << mon_rice << "월요일 국: " << mon_soup << "월요일 반찬: " << mon_side1 << ", " << mon_side2 << ", " << mon_side3 << endl;
            input = 0;
        }
        
        else if (input == TUE)
        {
            tue_rice[30] = rice[30], tue_soup[30] = soup[30], tue_side1[30] = side1[30], tue_side2[30] = side2[30], tue_side3[30] = side3[30];
            cout << "화요일 밥: " << tue_rice << "화요일 국: " << tue_soup << "화요일 반찬: " << tue_side1 << ", " << tue_side2 << ", " << tue_side3 << endl;
            input = 0;
        }

        else if (input == WED)
        {
            wed_rice[30] = rice[30], wed_soup[30] = soup[30], wed_side1[30] = side1[30], wed_side2[30] = side2[30], wed_side3[30] = side3[30];
            cout << "수요일 밥: " << wed_rice << "수요일 국: " << wed_soup << "수요일 반찬: " << wed_side1 << ", " << wed_side2 << ", " << wed_side3 << endl;
            input = 0;
        }
        
        else if (input == THU)
        {
            thu_rice[30] = rice[30], thu_soup[30] = soup[30], thu_side1[30] = side1[30], thu_side2[30] = side2[30], thu_side3[30] = side3[30];
            cout << "목요일 밥: " << thu_rice << "목요일 국: " << thu_soup << "목요일 반찬: " << thu_side1 << ", " << thu_side2 << ", " << thu_side3 << endl;
            input = 0;
        }
        
        else if (input == FRI)
        {
            fri_rice[30] = rice[30], fri_soup[30] = soup[30], fri_side1[30] = side1[30], fri_side2[30] = side2[30], fri_side3[30] = side3[30];
            cout << "금요일 밥: " << fri_rice << "금요일 국: " << fri_soup << "금요일 반찬: " << fri_side1 << ", " << fri_side2 << ", " << fri_side3 << endl;
            input = 0;
        }
        
        else if (input == SAT)
        {
            sat_rice[30] = rice[30], sat_soup[30] = soup[30], sat_side1[30] = side1[30], sat_side2[30] = side2[30], sat_side3[30] = side3[30];
            cout << "토요일 밥: " << sat_rice << "토요일 국: " << sat_soup << "토요일 반찬: " << sat_side1 << ", " << sat_side2 << ", " << sat_side3 << endl;
            input = 0;
        }
        
        else if (input == SUN)
        {
            sun_rice[30] = rice[30], sun_soup[30] = soup[30], sun_side1[30] = side1[30], sun_side2[30] = side2[30], sun_side3[30] = side3[30];
            cout << "일요일 밥: " << sun_rice << "일요일 국: " << sun_soup << "일요일 반찬: " << sun_side1 << ", " << sun_side2 << ", " << sun_side3 << endl;
            input = 0;
        }
        
        else if (input == ALL)
        {
            cout << "월요일\t화요일\t수요일\t목요일\t금요일\t토요일\t일요일" << endl;
            cout << mon_rice << "\t" << tue_rice << "\t" << wed_rice << "\t" << thu_rice << "\t" << fri_rice << "\t" << sat_rice << "\t" << sun_rice << endl;
            cout << mon_soup << "\t" << tue_soup << "\t" << wed_soup << "\t" << thu_soup << "\t" << fri_soup << "\t" << sat_soup << "\t" << sun_soup << endl;
            cout << mon_side1 << "\t" << tue_side1 << "\t" << wed_side1 << "\t" << thu_side1 << "\t" << fri_side1 << "\t" << sat_side1 << "\t" << sun_side1 << endl;
            cout << mon_side2 << "\t" << tue_side2 << "\t" << wed_side2 << "\t" << thu_side2 << "\t" << fri_side2 << "\t" << sat_side2 << "\t" << sun_side2 << endl;
            cout << mon_side3 << "\t" << tue_side3 << "\t" << wed_side3 << "\t" << thu_side3 << "\t" << fri_side3 << "\t" << sat_side3 << "\t" << sun_side3 << endl;
            input = 0;
        }
        
        else if (input == EXIT)
        {
            cout << "프로그램을 종료합니다." << endl;
            loop = false;
        }
    }
    return 0;
}
/*
3번 문제: 밥, 국, 반찬1, 2, 3이 들어가는 점심식사 리스트를 업데이트 하고자 한다.
각 항목에 맞는 문자열을 적절히 선언하고 일주일치 식단 리스트를 만들어 보자
3-1 - 월화수목금토일 식단 중 조회를 하고 싶은 요일을 선택하면 미리 입력한 점심식사 리스트가 출력되게 하라
3-2 - 프로그래밍을 할 때 갑자기 식단 재료가 부족하여 수정이 불가피할 상황을 대비하여 언제든지 각 요일에 맞는 식단으로 변경 가능하게 프로그래밍 할 것
*/