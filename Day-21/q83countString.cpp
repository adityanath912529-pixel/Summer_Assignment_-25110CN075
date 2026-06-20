#include<iostream>
#include<string>
using namespace std;

int main(){
string str;
cout<<"Enter the  word :";
cin>>str;
 int len=str.length();
 int vowels=0,consonants=0;
 for(int i=0;i<len;i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
        vowels++;
    }
    else{
        consonants++;
    }

 }

 cout<<"Vowels "<<vowels<<endl;
 cout<<"Consonants"<<consonants;
return 0;
}