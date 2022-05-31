#include <iostream>
#include <string>
#include "schedule.h"
#include "seat.cpp"

using namespace std;

Schedule::Schedule(){
    for(int i=0;i<8;i++){
        seat[i].setSeat(i);
        seat[i].setName("---");
        seat[i].setBook(false);
    } //각 자리별로 기본적인 형태로 만들어주는 생성자 
}

void Schedule::showSeat(){
    for(int i=0;i<8;i++){
        cout<< "    " <<seat[i].getName();
    }
} // 자리별로 예약현황을 출력시켜주는 메서드 구현 

void Schedule::Book(int index,string name){
    seat[index].setName(name);
    seat[index].setBook(true);
}//예약 하는 메서드 구현 

void Schedule::Book_Remove(int index,string name){
    seat[index].setName("---");
    seat[index].setBook(false);
} // 예약을 제거하는 메서드 구현 

string Schedule::getName_upper(int index){
    return seat[index].getName();
} // seat 클래스의 이름을 가져오는 메서드 구현 