#include<iostream>
using namespace std;
 void isPerfect(int num){
    int sum=0;

   ;
int original=num;
for(int i=1;i<=num/2;i++){
    if(num%i==0){
        sum+=i;
    }}
    
    if(original==sum){
        cout<<"Given number is perfect.";
    }

    else{
        cout<<"Given number is not perfect.";
    } 
 }

 int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    isPerfect(num);
    return 0;
 }