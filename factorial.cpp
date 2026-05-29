#include<iostream>
using namespace std;

int main(){
    int num;
    int fact=1;

    cout<<"Enter the number";
    cin>>num;

    if(num==0){
        cout<<"Factorial"<<1;
    }
    else{
        for(int i=1;i<=num;i++){
            fact=fact*i;
        }
        cout<<"Factorial:"<<fact;
    }
    return 0;
    
}