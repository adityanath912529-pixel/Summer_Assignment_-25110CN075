#include<iostream>
#include<string>

using namespace std;

int main(){
    string word;
    cout<<"Enter the word in small letter :";
    cin>>word;
   
bool firstRepeat=false;
    for(int i=0;i<word.length();i++){

        for(int k=0;k<i;k++){
            if(word[k]==word[i]){
                cout<<"First repeating character ";
                cout<<word[i];
                firstRepeat=true;
            break;
            }    
        }
        if(firstRepeat){
            break;
        }
}

return 0;}