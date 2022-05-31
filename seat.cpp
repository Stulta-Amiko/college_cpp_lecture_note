#include <iostream>
#include <string>
#include "seat.h"

using namespace std;

Seat::Seat(int seat,string name,bool book){
    this->setSeat(seat);
    this->setName(name);
    this->setBook(false);
} //생성자에서 기본적으로 설정하는 매서드 

void Seat::setName(string name){
    this->name = name;
} //이름 setter 구현 

string Seat::getName(){
        return this->name;
} //이름 getter 구현 

void Seat::setSeat(int seat){
    this->seatNumber = seat;
} //자리 setter 구현 

int Seat::getSeat(){
    return this->seatNumber;
} // 자리 getter 구현

void Seat::setBook(bool book){
    this->isBooked = book;
} // 예약여부 setter 구현

bool Seat::getBook(){
    return this->isBooked;
} //예약여부 getter 구현 