#include<iostream>
using namespace std;
int main()
{
    string str;
    int countDigits,countAlphabet,countSpecialChar,countSpaces;
    int counter;
    countDigits=countAlphabet=countSpecialChar=countSpaces=0;
    getline(cin,str);
    for(counter=0;str[counter]!=NULL;counter++)
    {
        if(str[counter]>='0' && str[counter]<='9')
            countDigits++;
        else if((str[counter]>='A' && str[counter]<='Z')||(str[counter]>='a' && str[counter]<='z'))
            countAlphabet++;
        else if(str[counter]==' ')
            countSpaces++;
        else
            countSpecialChar++;
    }
 
    cout<<countDigits<<endl;
    cout<<countAlphabet<<endl;
    cout<<countSpaces<<endl;
    cout<<countSpecialChar<<endl;
 
    return 0;
}
