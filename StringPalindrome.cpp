#include<iostream>
using namespace std;
int main(){
    string s,a;
    getline(cin,s);
    for(int i=s.length()-1;i>=0;i--){
        a+=s[i];
    }
    if(a==s){
        cout<<"palindrome";
    }
    else{
        cout<<"no";
    }
    return 0;
}
