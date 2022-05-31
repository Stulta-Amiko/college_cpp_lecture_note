#ifndef BOOKER
#define BOOKER
#include "seat.h"
#include <string>

class Schedule : public Seat{
    Seat seat[8]; //요구사항에서 각 시간별로 8자리씩 있었으므로 객체 배열 생성 
    public:
        Schedule(); //생성자 
        void showSeat(); // 자리를 보여주는 메서드 
        void Book(int index,string name); //예약을 하는 메서드 
        void Book_Remove(int index,string name); // 예약을 제거하는 메서드 
        string getName_upper(int index); //객체배열에서 각객체의 이름을 가져오는 메서드 
};

#endif