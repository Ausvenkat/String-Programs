#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    char c;
    cin>>c;
    int i;
    bool flag=false;
    for(i=s.length()-1;i>=0;i--){
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
