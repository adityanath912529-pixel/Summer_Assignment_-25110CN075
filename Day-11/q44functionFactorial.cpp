#include<iostream>
using namespace std;

void factorial(int a){
    int fact=1;
    if(a==0){
        cout<<"Factorial"<<1;
    }
    else{
        for(int i=1;i<=a;i++){
            fact=fact*i;
        }
        cout<<"Factorial:"<<fact;
    }

}
 
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    factorial(num);

    return 0;

}