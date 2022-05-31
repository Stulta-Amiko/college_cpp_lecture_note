#include "airlinebook.h"

class Console : public AirlineBook{
    public:
        void menuFunc(); //끝날때까지 반복되는 메뉴 메서드 
        void timeMenu_Book(); // 예약 메서드 
        void timeMenu_Remove(); // 예약 제거 메서드 
        void showBook(); //에약 출력 메서드 
};
