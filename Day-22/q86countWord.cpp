#include<iostream>
#include<string>
using namespace std;

int main(){
string str;
bool isWord=true; 

cout<<"Enter the sentence :";
getline(cin, str);

int count=0;
for(int i=0;i<str.length();i++){
    if(str[i]!=' ' && !isWord ){
        count++;
        isWord=true;
    }
else if(str[i]=' '){
    isWord=false;
}
}
 
cout<<"The number of word in given sentence: "<<count; 

}