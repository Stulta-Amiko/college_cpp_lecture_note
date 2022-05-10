#define _CRT_SECURE_NO_WARNINGS
#include "morse.cpp"
using namespace std;

int main() {
	Morse test;
	string description;
	string desc_morse;
    string decode_morse;
    cout<<"아래에 영문 텍스트를 입력하세요. 모스 부호로 바꿉니다."<<endl;
	getline(cin,description,'\n');
	test.text2Morse(description, desc_morse);
    cout << desc_morse << endl << endl;
    cout<<"모스 부호를 다시 영문 텍스트로 바꿉니다." << endl;
    if(test.morse2Text(desc_morse,description)){
        cout << description << endl;
    }else{
        cout << "변환 오류 발생" << endl;
    }
}