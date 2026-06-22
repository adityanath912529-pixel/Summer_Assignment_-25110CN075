#include<iostream>
#include<string>

using namespace std;

int main(){
    string word;
    cout<<"Enter the word in small letter :";
    cin>>word;
    int arr[26]={0};
    for(int i=0;i<word.length();i++){
        int idx=word[i]-'a';
        arr[idx]++;

       

    }

    for(int i=0;i<word.length();i++){
         if(arr[word[i]-'a']==1){
        cout<<"First non repeating charcter : "<<word[i];
        break;
    }
}


    
return 0;}