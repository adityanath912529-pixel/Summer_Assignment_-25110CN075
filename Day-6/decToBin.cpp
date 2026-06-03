#include<iostream>
using namespace std;

int main (){
    int dec,rem;
    int bin=0;
    int base=1;

    cout<<"Enter the decimal number :";
    cin>>dec;
    cout<<endl;

    while(dec>0){
    rem=dec%2;
    bin=bin+(rem*base);
    dec/=2;
    base*=10;
    }

    cout<<"Binary number :"<<bin;
}