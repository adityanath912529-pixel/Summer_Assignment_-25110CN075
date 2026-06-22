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
    int count2[26]={0};

    for(int i=0;i<word1.length();i++){
        count1[word1[i]-'a']++;
    }

    for(int i=0;i<word2.length();i++){
        count2[word2[i]-'a']++;
    }

for(int i=0;i<26;i++){
    if(count1[i]!=count2[i])
        isAnagram =false;
        break;
}

if(isAnagram){
    cout<<"Anagram string";
}

else{
    cout<<"Not a anagram string";
}
return 0;
}
