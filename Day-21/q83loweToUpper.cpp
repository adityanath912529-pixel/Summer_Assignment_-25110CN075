#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string word;
    cout<<"Enter the word :";
    cin>>word;

    for(int i=0;i<word.length();i++){

        if(word[i]>='A' && word[i]<='Z'){
            continue;
        }

        else{
            word[i]=word[i]-'a'+'A';
        }
    }

    cout<<word;


}