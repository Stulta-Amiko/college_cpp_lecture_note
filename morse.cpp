#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include "morse.h"
using namespace std;

Morse::Morse() {
	alphabet[0] = ".-";
	alphabet[1] = "-...";
	alphabet[2] = "-.-.";
	alphabet[3] = "-..";
	alphabet[4] = ".";
	alphabet[5] = "..-.";
	alphabet[6] = "--.";
	alphabet[7] = "....";
	alphabet[8] = "..";
	alphabet[9] = ".---";
	alphabet[10] = "-.-";
	alphabet[11] = ".-..";
	alphabet[12] = "--";
	alphabet[13] = "-.";
	alphabet[14] = "---";
	alphabet[15] = ".--.";
	alphabet[16] = "--.-";
	alphabet[17] = ".-.";
	alphabet[18] = "...";
	alphabet[19] = "-";
	alphabet[20] = "..-";
	alphabet[21] = "...-";
	alphabet[22] = ".--";
	alphabet[23] = "-..-";
	alphabet[24] = "-.--";
	alphabet[25] = "--..";
	digit[0] = "-----";
	digit[1] = ".----";
	digit[2] = "..---";
	digit[3] = "...--";
	digit[4] = "....-";
	digit[5] = ".....";
	digit[6] = "-....";
	digit[7] = "--...";
	digit[8] = "---..";
	digit[9] = "----.";
	slash = "-..-.";
	question = "..--..";
	comma = "--..--";
	period = ".-.-.-";
	plus = ".-.-.";
	equal = "-...-";  //각 모스부호 알파벳,정수,특수문자로 변환후 배열에 저장

}

void Morse::text2Morse(string text, string &morse) { //입력받은 문장을 모스부호로 바꿔주는 함수
	char desc_copy[10000]; //원문을 복사할 char형 생성
	strcpy(desc_copy, text.c_str()); //원문 복사
	for (int i = 0;i < text.length();i++) {
		if (desc_copy[i] == ' '){ //공백일때 
			morse.append("  "); //띄어쓰기 추가
		}
		else if (isalpha(desc_copy[i])) {
			morse.append(alphabet[desc_copy[i] - 97] + ' ');
		}
		else if (isdigit(desc_copy[i])) {
			morse.append(digit[desc_copy[i] - 48] + ' ');
		}
		else if (desc_copy[i] == '/') {
			morse.append(slash + ' ');
		}
		else if (desc_copy[i] == '?') {
			morse.append(question + ' ');
		}
		else if (desc_copy[i] == ',') {
			morse.append(comma + ' ');
		}
		else if (desc_copy[i] == '.') {
			morse.append(period + ' ');
		}
		else if (desc_copy[i] == '+') {
			morse.append(plus + ' ');
		}
		else if (desc_copy[i] == '=') {
			morse.append(equal + ' ');
		} //각 문자에 대응되는 모스부호 찾기
		else {
			cout << "지원하지 않는 문자입니다." << endl;
		} // 찾는 문자가 없을때 띄우기 
	}
}

bool Morse::morse2Text(string morse, string &text) { //모스부호를 텍스트로 바꾸기 
	string alpha[26] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t"
    ,"u","v","w","x","y","z"};
    string dig[10] = {"0","1","2","3","4","5","6","7","8","9"};
    string decode = ""; //decode할 문자열 생성
    for(int i = 0;i<morse.length();){
        int pos = morse.find(" ",i); //빈칸을 간격으로 알파벳을 배치했으므로 빈칸을 찾음 
        string s = morse.substr(i,pos-i); //빈칸을 찾아서 
        bool order = true; //문자를 알파벳이던 정수형이던 특수문자던 찾았을때를 대비해서 중복되지 않도록 하는 불리언 자료형 변수 
        for(int j = 0;j<26;j++){ //잘라놓은 문자열이 알파벳중 어느것과 일치하는지 찾아서
            if(s == alphabet[j]){ //일치한다면  
                decode.append(alpha[j]); // decode에 추가 
                order = false; //밑에 무시 
                break;
            }
        }if(order){
            for(int j=0;j<10;j++){ //정수형중에 찾기 
                if(s == digit[j]){
                    decode.append(dig[j]);
                    order = false;
                    break;
                }
            }
        }if(order){
            if (s == slash) {
                decode.append("/");
            }
            else if (s == question) {
                decode.append("?");
            }
            else if (s == comma) {
                decode.append(",");
            }
            else if (s == period) {
                decode.append(".");
            }
            else if (s == plus) {
                decode.append("+");
            }
            else if (s ==  equal) {
                decode.append("=");
            }           //각종 특수문자에서 찾기 
        }
        if(morse[pos] == ' ' && morse[pos+1] == ' ' && morse[pos+2] == ' '){
            decode.append(" ");
            pos+=2;
        } //만약 띄어쓰기 공백이면 3개의 공백이 존재하니 전부 존재할때 띄어쓰기 추가하고 pos +=2
        i = pos+1; //한칸 띄어서 재탐색 
    }
    if(decode == text) return true; //만약 해석한것과 원문이 일치한다면 true를 반환 
    return false; //아니면 false 반환 
}


