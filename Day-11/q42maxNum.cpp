#include<iostream>
using namespace std;

int maximum(int a,int b){
    if(a>b)
    return a;
    else 
    return b;
}

int main(){
    int num1,num2;
    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"Enter the second number:";
    cin>>num2;
    cout<<"Maximum: "<<maximum(num1,num2);

}