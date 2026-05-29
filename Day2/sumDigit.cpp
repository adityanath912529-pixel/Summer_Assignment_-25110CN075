#include<iostream>
using namespace std;

int main (){
    int num,sumDigit=0,rem;
     cout<<"Enter the number:" ;cout<<endl;
     cin>>num;
      int originalNum=num;
     while(num>0){
        rem=num%10;
        sumDigit+=rem;
        num/=10;
     }

     cout<<"Sum of digit of "<<originalNum<<":"<<sumDigit;

     return 0;
}