#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(isalpha(s[i])){
            if(islower(s[i])){
                s[i]=toupper(s[i]);
            }
            else{
                s[i]=tolower(s[i]);
            }
        }
        else{
            cout<<"not alphabetical";
        }
    }
    cout<<s;
    return 0;
}
