#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

class Morse {
private:
	string alphabet[26];
	string digit[10];
	string slash, question, comma, period, plus, equal;
public:
	Morse();
	void text2Morse(string text, string &morse);
	bool morse2Text(string morse, string &text);
};

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
	equal = "-...-";

}

void Morse::text2Morse(string text, string &morse) {
	char desc_copy[10000];
	strcpy(desc_copy, text.c_str());
	for (int i = 0;i < text.length();i++) {
		if (desc_copy[i] == ' '){
			morse.append("   ");
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
		}
		else {
			cout << "지원하지 않는 문자입니다." << endl;
		}
	}
}

bool Morse::morse2Text(string morse, string &text) {
	return false;
}

int main() {
	Morse test;
	string description;
	string desc_morse;
	getline(cin,description,'\n');
	test.text2Morse(description, desc_morse);
	cout << desc_morse << endl;
}