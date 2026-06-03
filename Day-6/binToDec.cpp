#include<iostream>
using namespace std;

int main(){
    int bin,rem;
    int dec=0;
    int base=1;
    cout<<"Enter the binary number:";
    cin>>bin;
    cout<<endl;
    
while(bin>0){
    rem=bin%10;
    dec=dec+(rem*base);
    bin/=10;
    base*=2;

}

cout<<"Decimal number :"<<dec;

}