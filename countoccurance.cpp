#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    char c;
    cin>>c;
    int i,count=0;
    for(i=0;i<=s.length();i++){
        if(s[i]==c){
            count++;
        }
    }
    cout<<count;
    return 0;
}
