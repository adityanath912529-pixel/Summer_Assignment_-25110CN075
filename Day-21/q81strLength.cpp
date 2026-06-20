#include<iostream>
using namespace std;

int main(){
   string str;
    cout<<"Enter the word :";
    cin>>str;

    int i=0;
    while(str[i]!='\0'){
    i++;
    }

    cout<<"Length "<<i;
    return 0;
}