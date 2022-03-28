#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char description[10000];
    int cnt[26];
    int pos;
    cin.getline(description,10000,';');
    int length = strlen(description);
    for(int j=0;j<26;j++){
        cnt[j] = 0;
    }
    for(int i=0;i<length;i++){
        if(isalpha(description[i])){
            if(description[i]>=65 &&description[i]<=90){
                description[i] = tolower(description[i]);
            }
            pos = description[i]-97;
            cnt[pos]++;
        }
    }
    int a;
    for(int i=0;i<26;i++){
        a = cnt[i];
        printf("%c(%d) :",i+97,a);
        for(int j=0;j<a;j++){
            cout<<'*';
        }
        cout << endl;
    }
    return 0;
}