#include<iostream>
using namespace std;

int main (){
    int num,productDigit=1,rem;
     cout<<"Enter the number:" ;cout<<endl;
     cin>>num;
      int originalNum=num;
     while(num>0){
        rem=num%10;
        productDigit*=rem;
        num/=10;
     }

     cout<<"Product of digit of "<<originalNum<<":"<<productDigit;

     return 0;
    }