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
    cout<<"Reverse of :"<<originalNum<<" is "<<reverseNum;
return 0;
}