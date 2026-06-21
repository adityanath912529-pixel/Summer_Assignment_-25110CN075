#include<iostream>
#include<string>

using namespace std;

int main(){
    string word;
    cout<<"Enter the word in small letter:";
    cin>>word;
    int arr[26]={0};
    for(int i=0;i<word.length();i++){
        int idx=word[i]-'a';
        arr[idx]++;

    }

    for(int i=0;i<26;i++){

        if(arr[i]!=0){
        cout<<"frequency of "<<char(i+'a')<<" "<<arr[i]<<endl;
    }
}

return 0;}