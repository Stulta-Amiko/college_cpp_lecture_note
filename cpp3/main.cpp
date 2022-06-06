#include <iostream>
#include <string>
#include "NamedCircle.cpp"
#include "Circle.cpp"

using namespace std;

int main(){
    NamedCircle pizza[5];
    float largest = 0;
    int largeIndex = 0;
    cout<<sizeof(pizza)/sizeof(pizza[0])<<" 개의 정수 반지름과 원의 이름을 입력하세요."<<endl;
    for(int i=0;i<sizeof(pizza)/sizeof(pizza[0]);i++){
        string str1;
        cout<< i+1 <<">> ";
        getline(cin,str1);
        int index = str1.find(" ");
        int rad = stoi(str1.substr(0,index));
        string str = str1.substr(index+1,str1.size());
        pizza[i].setRadius(rad);
        pizza[i].setName(str);
        if(pizza[i].getArea()>largest){
            largeIndex = i;
            largest = pizza[i].getArea();
        }
    }
    cout<<"가장 면적이 큰 피자는 "<<pizza[largeIndex].getName()<<"입니다."<<endl;
}