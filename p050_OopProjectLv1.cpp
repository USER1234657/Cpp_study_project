//p050 OOP 단계별 프로젝트 1단계
#define NAME_LEN 20
#include <iostream>
#include <cstring>

using namespace std;

void showMenu();
void makeAccount();
void depositMoney();
void withdrawMoney();
void exitProgram();

typedef struct
{
    int account_id;
    int balance;
    char customer_name[NAME_LEN];
} account;

enum {MAKEACC = 1, DEPOSIT, WITHDRAW, EXIT};

int main()
{
    int input = 0;

    while(1)
    {
        showMenu();
        cout << "선택: ";
        cin >> input;
        cout << endl;

        switch(input)
        {
            case MAKEACC:
                makeAccount();
                break;
            default:
                cout << "없는 선택지입니다, 되돌아갑니다." << endl;
        }
    }
    return 0;
}

void showMenu()
{
    int choose = 0;

    cout << "-----Menu-----" << endl;
    cout << "1. 계좌계설" << endl;
    cout << "2. 입금" << endl;
    cout << "3. 출금" << endl;
    cout << "4. 계좌정보 전체 출력" << endl;
    cout << "5. 프로그램 종료" << endl;
}

account acc_arr[50];
int acc_cnt = 0;

void makeAccount()
{   
    cout << "[=== 계좌 개설 ===]" << endl;
    cout << "계좌 ID: "; cin >> acc_arr[acc_cnt].account_id;
    cout << "이름: "; cin >> acc_arr[acc_cnt].customer_name;
    cout << "입금액: "; cin >> acc_arr[acc_cnt].balance;
    acc_cnt++;
}

void depositMoney() //입금
{   
    int id, money;

    cout << "[=== 입금 ===]" << endl;
    cout << "계좌ID: "; cin >> id;
    cout << "입금액 "; cin >> money;

    for (int i = 0; i < acc_cnt; i++)
    {
        if (acc_arr[i].account_id == id)
        {
            acc_arr[i].balance += money;
            cout << "입금완료" << endl << endl;
            return;
        }
    }
    cout << "없는 아이디입니다." << endl << endl;
}
//void withdrawMoney();
//void showAllAccInfo();