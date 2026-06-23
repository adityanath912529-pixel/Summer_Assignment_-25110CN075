#include<iostream>
#include<string>
using namespace std;

int main(){
    int prevCount=0;

   string str;
    cout<<"Enter the sentence :";
    getline(cin,str);

    string word="";
    string longest="";

for(int i=0;i<str.length();i++){

    if(str[i]!=' '){
        word+=str[i];

    }

    else { 
        if(word.length()>longest.length()){
            longest=word;
        }
     word="";
}
    
}
if(word.length()>longest.length())
longest =word;

cout<<longest;
return 0;
}