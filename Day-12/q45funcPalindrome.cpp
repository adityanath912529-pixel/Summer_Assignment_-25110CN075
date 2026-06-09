#include<iostream>
using namespace std;

void isPalindrome(int num){
    int originalNum=num;
int rem,reverseNum=0;
    while(num>0){
        rem=num%10;
        reverseNum=reverseNum*10+rem;
        num/=10;
    }

    if(originalNum==reverseNum){
        cout<<"Number is palindrome";
    }
    else{
        cout<<"Number is not palindrome";

    }

}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    isPalindrome(num);

    return 0;
}