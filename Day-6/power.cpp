#include<iostream>
using namespace std;

int main(){
    int base,power,res=1;
    cout<<"Enter the base :";
    cin>>base;
    cout<<endl;
    cout<<"Enter the power :";
    cin>>power;
    cout<<endl;

    for(int i=1;i<=power;i++){
       res*=base;
    }
    cout<<"Result: "<<res;

}