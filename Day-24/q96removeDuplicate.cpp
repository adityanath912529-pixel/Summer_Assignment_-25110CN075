#include<iostream>
#include<string>
using namespace std;

int main(){
    string word;
    cout<<"Enter the word :";
    cin>>word;
    
 
 
  
 for(int i=0;i<word.length();i++){
     bool isDuplicate=false;
for(int k=0;k<i;k++){
    if(word[k]==word[i]){
        isDuplicate =true;
        break;
    }
    
}
if(isDuplicate){
        continue;
    }
    cout<<word[i];
    


 }


    return 0;
}