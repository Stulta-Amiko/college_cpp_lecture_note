#include <iostream>
#include <string>
#include "airlinebook.h"
#include "schedule.cpp"

using namespace std;

AirlineBook::AirlineBook(){

}//생성자 
void AirlineBook::CreateBook(int time,int index,string name){
    sched[time].Book(index,name);
}// 예약을 생성하는 메서드 
void AirlineBook::RemoveBook(int time,int index,string name){
    if(name.compare(sched[time].getName_upper(index))==0){
        sched[time].Book_Remove(index,name);
    }else{
        cout<<"좌석번호와 이름이 일치하지 않습니다."<<endl;
    }
} //예약을 제거하는 메서드 
void AirlineBook::showBook_time(int time){
    sched[time].showSeat();
}// 시간에 따라 좌석을 보여주는 메서드  