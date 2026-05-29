#include<iostream>
using namespace std;
int main(){
    int countDigit=0;
    int rem;
    int num;
    cout<<"Enter the number :";
    cin>>num; cout<<endl;
    if (num==0){ cout<<"Digit:"<<1;} 
    else{
    while(num>0){
        rem=num%10;
        countDigit++;
        num=num/10;
    }
    cout<<"Digit:"<<countDigit;}}