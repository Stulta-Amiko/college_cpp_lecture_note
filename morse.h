#ifndef MORSE_CON
#define MORSE_CON
using namespace std;
class Morse{
private:
	string alphabet[26];
	string digit[10];
	string slash, question, comma, period, plus, equal;
public:
	Morse();
	void text2Morse(string text, string &morse);
	bool morse2Text(string morse, string &text);
};
#endif