#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter the word ";
    cin>>str;
    
    int len=0;
    while(str[len]!='\0'){
    len++;
    }

    int i=0,j=len-1;
    char temp;
    while(i<j){
           temp=str[i];
           str[i]=str[j];
           str[j]=temp;
           i++;
           j--;
    }
cout<<"Reverse string"<<str;
    

}

