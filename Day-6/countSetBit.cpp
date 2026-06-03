#include<iostream>
using namespace std;
 int main(){
    int num;
    int count=0;
    cout<<"Enter the decimal number:";
    cin>>num;

    while(num>0){
        if(num%2==1)
        count++;

        num/=2;
    }
    cout<<"number of set bits: "<<count;
    cout<<

 } 