#include<iostream>
using namespace std;

int main(){
    int firstNum,secondNum,gcd;
    cout<<"Enter first number ";
    cin>>firstNum;
    cout<<endl;

    cout<<"Enter second number ";
    cin>>secondNum;

    for(int i=1;i<=firstNum && i<=secondNum;i++){
        if(firstNum%i== 0 &&secondNum%i==0 ){
           gcd=i;
        }
    }
 cout<<endl<<"gcd :"<<gcd;
}