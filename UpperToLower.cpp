#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]>=65&&s[i]<=92){
            s[i]=s[i]+32;
        }
    }
    cout<<s;
    return 0;
}
