#include<iostream>
using namespace std;

int main (){
    int num,factor;

    cout<<"Enter the number:";
    cin>>num;
    cout<<endl;

    for(int i=1;i<=num;i++){
        if(num % i==0){
            cout<<i<<" ";
        }
    
    } 
    return 0;
}