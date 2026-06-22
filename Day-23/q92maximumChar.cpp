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
int max=arr[0];
int maximum =0;
    for(int i=1;i<26;i++){
         if(arr[i]>max){
            max=arr[i];
            maximum=i;
        
    }
}

cout<<"Maximum frequency element :"<<char(maximum + 'a');



    
return 0;}