#include<iostream>
#include<string>
using namespace std;

int main(){
    string word;
    cout<<"Enter the word :";
    getline(cin,word);
    string res;
    

    for(int i=0;i<word.length();i++){
        if(word[i]==' ')
       { continue;}
    
    else{
        res+=word[i];
    
    }
}
cout<<res;
return 0;

}
