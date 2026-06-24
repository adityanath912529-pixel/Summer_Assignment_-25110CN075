#include<iostream>
#include<string>
using namespace std;

int main(){
 
    string word1,word2;
     bool isAnagram=true;

    cout<<"Enter the first word : ";
    cin>>word1;
    cout<<endl;
    cout<<"Enter the second word : ";
    cin>>word2;

    if(word1.length()!=word2.length()){
        isAnagram=false;
    }

    int count1[26]={0};

    for(int i=0;i<word1.length();i++){
        count1[word1[i]-'a']++;
    }

    for(int i=0;i<word2.length();i++){
        int idx=word2[i]-'a';
        if(count1[idx]!=0){
            count1[idx]==0;
            cout<<word2[i]<<" ";
        }
    }

    return 0;
}