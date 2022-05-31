#ifndef SEAT
#define SEAT

#include <string>

using namespace std;

class Seat{
        string name; // 각 자리별 이름을 저장하기 위한 변수 
        int seatNumber; // 각 자리별 번호를 저장하기 위한 변수 
        bool isBooked; // 각 자리별 예약이 되어있는지에 대한 예약 여부 판별 
    public:
        Seat(int seat=0,string name="",bool book=false); //생성자
        void setName(string name); //이름 setter
        string getName(); //이름 getter
        void setSeat(int seat); //자리 setter
        int getSeat(); //자리 getter
        void setBook(bool book); // 예약여부 setter
        bool getBook(); // 예약여부 getter
};

#endif