#include<iostream>
#include<string>
#include"console.h"
#include "airlinebook.cpp"

using namespace std;


void Console::menuFunc(){
    while(true){
    int menu;
    cout << "예약:1, 취소:2, 보기:3, 끝내기:4>>";
    cin >> menu;
    switch (menu)
    {
    case 1:
        timeMenu_Book();
        break;
    case 2:
        timeMenu_Remove();
        break;
    case 3:
        showBook();
        break; 
    default:
        cout<<"예약 시스템을 종료합니다."<<endl;
        break;
    }

    if(menu == 4){
        break;
    }

    }
} //끝날때 까지 반복되는 메뉴 메서드
void Console::timeMenu_Book(){
    int time;
    int seat;
    string name;
    cout<<"07시:1, 12시:2, 17시:3 >>";
    cin>>time;
    switch (time)
    {
    case 1:
        cout<<"07시: ";
        AirlineBook::showBook_time(time-1);
        cout << endl << "좌석 번호>>";
        cin >> seat;
        cout<<"이름 입력>>";
        cin >> name;
        cout << endl;
        AirlineBook::CreateBook(time-1,seat-1,name);
        break;
    case 2:
        cout<<"12시: ";
        AirlineBook::showBook_time(time-1);
        cout << endl << "좌석 번호>>";
        cin >> seat;
        cout<<"이름 입력>>";
        cin >> name;
        cout << endl; 
        AirlineBook::CreateBook(time-1,seat-1,name);
        break;
    case 3:
        cout<<"17시: ";
        AirlineBook::showBook_time(time-1);
        cout << endl << "좌석 번호>>";
        cin >> seat;
        cout<<"이름 입력>>";
        cin >> name;
        cout << endl;
        AirlineBook::CreateBook(time-1,seat-1,name);
        break;
    default:
        cout<<"잘못된 번호를 입력하셨습니다."<<endl;
        return;
        break;
    }
}//예약 메서드 구현부 

void Console::timeMenu_Remove(){
    int time;
    int seat;
    string name;
    cout<<"07시:1, 12시:2, 17시:3 >>";
    cin>>time;
    switch (time)
    {
    case 1:
        cout<<"07시: ";
        AirlineBook::showBook_time(time-1);
        cout << endl << "좌석 번호>>";
        cin >> seat;
        cout<<"이름 입력>>";
        cin >> name;
        cout << endl;
        AirlineBook::RemoveBook(time-1,seat-1,name);
        break;
    case 2:
        cout<<"12시: ";
        AirlineBook::showBook_time(time-1);
        cout << endl << "좌석 번호>>";
        cin >> seat;
        cout<<"이름 입력>>";
        cin >> name;
        cout << endl;
        AirlineBook::RemoveBook(time-1,seat-1,name);
        break;
    case 3:
        cout<<"17시: ";
        AirlineBook::showBook_time(time-1);
        cout << endl << "좌석 번호>>";
        cin >> seat;
        cout<<"이름 입력>>";
        cin >> name;
        cout << endl;
        AirlineBook::RemoveBook(time-1,seat-1,name);
        break;
    default:
        cout<<"잘못된 번호를 입력하셨습니다."<<endl;
        return;
        break;
    } // 예약 해제 메서드 구현부 
}
void Console::showBook(){
    cout<< "07시: ";
    AirlineBook::showBook_time(0);
    cout<< endl;
    cout<< "12시: ";
    AirlineBook::showBook_time(1);
    cout<< endl;
    cout<< "17시: ";
    AirlineBook::showBook_time(2);
    cout<< endl<<endl;
} // 출력메서드 구현부 