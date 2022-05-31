#ifndef AIRBOOK
#define AIRBOOK
#include <string>
#include "schedule.h"

using namespace std;
class AirlineBook : public Schedule{
        Schedule sched[3]; // 시간별 객체배열 선언 
    public:
        AirlineBook(); // 생성자 
        void CreateBook(int time,int index,string name); //예약 생성 메서드 
        void RemoveBook(int time,int index,string name); //예약 제거 메서드 
        void showBook_time(int time); //출력 메서드
        };

#endif