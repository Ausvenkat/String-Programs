#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int vowel=0,cons=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            vowel++;
        }
        else{
            cons++;
        }
    }
    cout<<vowel<<endl;
    cout<<cons;
    return 0;
}
