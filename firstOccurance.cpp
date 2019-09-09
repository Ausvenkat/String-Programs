#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    char c;
    cin>>c;
    int i;
    bool flag=false;
    for(i=0;i<s.length();i++){
        if(s[i]==c){
            flag=true;
            break;
        }
    }
    if(flag==true){
        cout<<i;
    }
    return 0;
}
