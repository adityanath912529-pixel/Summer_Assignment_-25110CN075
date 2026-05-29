#include<iostream>
using namespace std;
int main (){
    int num ,rem;
    int reverseNum=0;
    cout<<"Enter the num :";
    cin>>num;
    cout<<endl;
     int originalNum=num;

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
return 0;
}