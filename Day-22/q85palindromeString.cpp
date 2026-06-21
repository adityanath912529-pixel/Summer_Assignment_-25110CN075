#include<iostream>
#include<string>
 using namespace std;

 int main(){

    bool isPalindrome=false;
    string str;
    cout<<"Enter the word: ";
    cin>>str;

    int lo=0;
    int high=str.length()-1;
    while(lo<high){
        if(str[lo]!=str[high]){
        cout<<"Not a palindrome.";
        isPalindrome=true;
        break;

        }
        else{
            lo++;
            high--;
        }

    }
    if(!isPalindrome){
        cout<<"It is a palindeome ";
    }
    
 }