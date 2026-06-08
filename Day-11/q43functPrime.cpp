#include<iostream>
using namespace std;

void isPrime(int a){
    int count=0;
    if(a==1){
        cout<<"Not a prime";
    }

    else{
        for(int i=2;i<=a/2;i++){
            if(a%i==0){
                count++;
                break;
            }
        }
       if(count==1){
        cout<<"Not a prime number";
       }
            else{
                cout<<"It is a prime number";
            }

    }

}

int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;

    isPrime(num);

    return 0;
}