#include<iostream>
#include<string>
using namespace std;

int main(){
    string word;
    cout<<"Enter the word :";
    cin>>word;
    
 
 int count=1;
  
 for(int i=1;i<word.length();i++){
if(word[i]==word[i-1]){
    count++;
}
else{
    cout<<word[i-1]<<count;
    count=1;
} 


 }
cout<<word[word.length()-1]<<count;

    return 0;
}